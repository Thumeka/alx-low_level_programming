#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void file_error(int file_from, int file_to, char *argv[]);
int main(int argc, char *argv[]);

/**
 * struct - for the elf
 * @e_ident: indentification
 * @e_type: the type
 * @e_machine: the machine
 * @e_version: the version
 * @e_entry: the entry point
 * @e_phoff: offset
 * @e_shoff: header set
 * @e_flags: specific flags
 * @e_ehsize: header offset
 * @e_phentsize: size
 * @e_phnum: number
 * @e_shentsize: size of header entry
 * @e_shnum: number of header entry
 * @e_shstrndx: string
 */

typedef struct 
{

	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

#endif
