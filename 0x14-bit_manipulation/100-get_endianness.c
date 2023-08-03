#include "main.h"
/**
* get_endianness - checks if multibyte data
* Return: 0 or 1
*/
int get_endianness(void)
{
	int j = 0x00000001;
	char *p = (char *)&j;
	return (p[0]);
}
