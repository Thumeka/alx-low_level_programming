#include "main.h"

/**
 * print_error - program that displays the information contained
 * in the ELF header at the start of an ELF file.
 * @msg: the elf message
 *
 * Return: void
 */

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - program that displays the information contained
 * in the ELF header at the start of an ELF file
 * @header: header file
 *
 * Return: void
 */

void print_elf_header(const Elf64_Ehdr *header)
{
	int j;

	printf("Magic: ");
	for (j = 0; j < EI_NIDENT; ++j)
		printf("%02x ", header->e_ident[j]);
	printf("\n");

	printf("Class:  %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");

	printf("Data:  %s\n", (header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" :
			(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Invalid data encoding");

	printf("Version:  %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI:  ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("OpenBSD ABI\n");
			break;
		default:
			printf("Unknown\n");
	}
	printf("ABI Version:  %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:  ");

	switch (header->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown\n");
	}
	printf("Entry point address:  0x%lx\n", header->e_entry);
}
