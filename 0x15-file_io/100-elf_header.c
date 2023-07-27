#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
/**
 * print_magic - magic
 * @header: head
 */
void print_magic(Elf32_Ehdr *header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
}
/**
 * print_class_and_data - data elf
 * @header: head
 */
void print_class_and_data(Elf32_Ehdr *header)
{
	printf("Class:                             ELF%d\n",
		header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data:                              2's complement, %s endian\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
}
/**
 * print_version - elf
 * @header: head
 */
void print_version(Elf32_Ehdr *header)
{
	printf("Version:                           %d (current)\n",
		header->e_ident[EI_VERSION]);
	switch (header->e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
	}
	printf("\n");
}
/**
 * print_osabi - osabi
 * @header: head
 */
void print_osabi(Elf32_Ehdr *header)
{
	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * print_abiversion - abi
 * @header: head
 */
void print_abiversion(Elf32_Ehdr *header)
{
	printf("ABI Version:                       %d\n",
		header->e_ident[EI_ABIVERSION]);
}
/**
 * print_elf_header_info - elf
 * @header: head
 */
void print_elf_header_info(Elf32_Ehdr *header)
{
	print_magic(header);
	print_class_and_data(header);
	print_version(header);
	print_osabi(header);
	print_abiversion(header);


	printf("Type:                              %d\n", header->e_type);
	printf("Entry point address:               0x%08x\n", header->e_entry);
}
/**
 * main - main function
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		exit(98);
	}

	Elf32_Ehdr header;

	ssize_t num_read = read(fd, &header, sizeof(Elf32_Ehdr));

	if (num_read != sizeof(Elf32_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file: %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
