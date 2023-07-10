#include "main.h"

/**
* main - copies content of a file to another file
* @argc: count
* @argv: vector
*
* Return: 0 or exit
*/

int main(int argc, char *argv[])
{
	const char *MSG97 = "Usage: cp file_from file_to\n";
	const char *MSG98 = "Error: Can't read from file %s\n";
	const char *MSG99 = "Error: Can't write to %s\n";
	const char *MSG100 = "Error: Can't close fd %d\n";

	int _fr, _to;
	int len, cpf1, cpf2;
	char buff[1024];

	mode_t posi = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s", MSG97), exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, MSG98, argv[1]), exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, MSG99, argv[2]), exit(99);
	_fr = open(argv[1], O_RDONLY);
	if (_fr == -1)
		dprintf(STDERR_FILENO, MSG98, argv[1]), exit(98);
	_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, posi);
	while ((len = read(_fr, buff, 1024)) > 0)
	{
		if (_to == -1 || (write(_to, buff, len) != len))
			dprintf(STDERR_FILENO, MSG99, argv[2]), exit(99);
	}
	if (len == -1)
		dprintf(STDERR_FILENO, MSG98, argv[1]), exit(98);
			cpf1 = close(_fr);
	if (cpf1 == -1)
		dprintf(STDERR_FILENO, MSG100, _fr), exit(100);
	cpf2 = close(_to);
	if (cpf2 == -1)
		dprintf(STDERR_FILENO, MSG100, _to), exit(100);
	return (0);
}
