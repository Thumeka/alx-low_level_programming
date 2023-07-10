#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
* print_magic - Prints the magic numbers
* @e: A pointer
*
* Description: separated by spaces.
*/

void print_magic(char *e)
{
	int index;

	printf("  Magic:  ");

	for (index = 0; index < 16; index++)
		printf(" %02x", e[index]);
	printf("\n");
}

/**
* print_data - Prints the data
* @e: A pointer
*/

void print_data(char *e)
{
	char print_data = e[5];

	printf("  Data:                              2's complement");
	if (print_data == 1)
		printf(", little endian\n");
	if (print_data == 2)
		printf(", big edian\n");
}
/**
* print_version - Prints the version
* @e: A pointer
*/

void print_version(char *e)
{
	int print_version = e[6];

	printf(" Version:                           %d", print_version);

	if (print_version == EV_CURRENT)
		printf(" (current)");
	printf("\n");

}

/**
* print_osabi - Prints the OS/ABI
* @e: A pointer
*/

void print_osabi(char *e)
{
	char print_osabi = e[7];

	printf("  OS/ABI:                            ");
	if (print_osabi == 0)
		printf("UNIX - System V\n");
	else if (print_osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (print_osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown; %x>\n", print_osabi);

	printf("  ABI Version:                       %d\n", e[8]);

}
/**
* print_type - Prints the type
* @e: The ELF type.
*/

void print_type(char *e)
{
	char print_type = e[16];

	if (e[5] == 1)
		print_type = e[16];
	else
		print_type = e[17];
	printf("  Type:                              ");
	if (print_type == 0)
		printf("NONE (No file type)\n");
	else if (print_type == 1)
		printf("REL (Relocatable file)\n");
	else if (print_type == 2)
		printf("EXEC (Executable file)\n");
	else if (print_type == 3)
		printf("DYN (Shared object file)\n");
	else if (print_type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", print_type);
}

/**
* print_entry - Prints the entry point
* @e: The address
*/

void print_entry(char *e)
{
	int j;
	int start;
	char sys;

	printf("  Entry point address:               0x");

	sys = e[4] + '0';
	if (sys == '1')
	{
		start = 26;
		printf("80");
		for (j = start; j >= 22; j--)
		{
			if (e[j] > 0)
				printf("%x", e[j]);
			else if (e[j] < 0)
				printf("%x", 256 + e[j]);
		}
		if (e[7] == 6)
			printf("00");
	}
	if (sys == '2')
	{
		start = 26;
		for (j = start; j > 23; j--)
		{
			if (e[j] >= 0)
				printf("%02x", e[j]);
			else if (e[j] < 0)
				printf("%02x", 256 + e[j]);
		}
	}
	printf("\n");
}

/**
* print_class - Prints the class of an ELF header.
* @e: A pointer to an array containing the ELF class.
*/
void print_class(char *e)
{
	char print_class = e[4] + '0';

	if (print_class == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(e);

	if (print_class == '1')
		printf("  Class:                             ELF32\n");

	if (print_class == '2')
		printf("  Class:                             ELF64\n");
	print_data(e);
	print_version(e);
	print_osabi(e);
	print_type(e);
	print_entry(e);
}

/**
* check_elf - Checks if elf file
* @e: pointer
*
* Return: 1 or 0
*/
int check_elf(char *e)
{
	int print_entry = (int)e[0];
	char E = e[1];
	char L = e[2];
	char F = e[3];

	if (print_entry == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}

/**
* main - Displays the information contained
* ELF header
* @argc: count
* @argv: vector
*
* Return: 0
*
* Description: If the file is not an ELF File or exit code 98.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fdiscript, r_read;
	char p[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fdiscript = open(argv[1], O_RDONLY);
	if (fdiscript < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fdiscript, 0, SEEK_SET);
	r_read = read(fdiscript, p, 27);

	if (r_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!check_elf(p))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	print_class(p);
	close(fdiscript);
	return (0);
}
