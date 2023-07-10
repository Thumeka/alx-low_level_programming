#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int check_elf(char *e);
void print_magic(char *e);
void print_class(char *e);
void print_data(char *e);
void print_version(char *e);
void print_osabi(char *e);
void print_type(char *e);
void print_entry(char *e);
int main(int __attribute__((__unused__)) argc, char *argv[]);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
#endif /* MAIN_H */
