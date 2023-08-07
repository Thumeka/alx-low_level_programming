#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>

/**
 * print_identification - indetify
 * @e_ident: header
 */
void print_identification(unsigned char e_ident[16])
{
	int i;

	printf("Magic: ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}
/**
 * print_class - class
 * @e_ident: header
 */
void print_class(unsigned char e_ident[16])
{
	printf("Class: ");
	if (e_ident[4] == 1)
	{
		printf("ELF32\n");
	}
	else if (e_ident[4] == 2)
	{
		printf("ELF64\n");
	}
	else
	{
		fprintf(stderr, "Error: Invalid ELF class\n");
		exit(98);
	}
}
/**
 * print_data - data information
 * @e_ident: indent
 */
void print_data(unsigned char e_ident[16])
{
	printf("Data: ");
	if (e_ident[5] == 1)
	{
		printf("2's complement, little endian\n");
	}
	else if (e_ident[5] == 2)
	{
		printf("2's complement, big endian\n");
	}
	else
	{
		fprintf(stderr, "Error: Invalid data encoding\n");
		exit(98);
	}
}
/**
 * print_version -  version
 * @e_version: header
 */
void print_version(uint32_t e_version)
{
	printf("Version: %u\n", e_version);
}
/**
 * print_abi - abi printing
 * @e_ident: header
 */
void print_abi(unsigned char e_ident[16])
{
	printf("OS/ABI: ");
	switch (e_ident[7])
	{
		case 0:
			printf("UNIX System V ABI\n");
			break;
		case 3:
			printf("Linux\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * print_type - type to print
 * @e_type: header
 */
void print_type(uint16_t e_type)
{
	printf("Type: ");
	switch (e_type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * print_entry_point - entry point
 * @e_entry: header
 */
void print_entry_point(uint64_t e_entry)
{
	printf("Entry point address: 0x%lx\n", e_entry);
}
/**
 * print_elf_header - the elf
 * @header: head
 */
void print_elf_header(Elf64_Ehdr header)
{
	print_identification(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	print_version(header.e_version);
	print_abi(header.e_ident);
	printf("ABI Version: %u\n", header.e_ident[8]);
	print_type(header.e_type);
	print_entry_point(header.e_entry);
}
/**
 * read_elf_header -  reading
 * @fd: file
 */
void read_elf_header(int fd)
{
	Elf64_Ehdr header;

	lseek(fd, 0, SEEK_SET);
	read(fd, &header, sizeof(header));
	print_elf_header(header);
}
/**
 * main - the reader
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Failed to open file\n");
		exit(98);
	}
	read_elf_header(fd);
	close(fd);
	return (0);
}
