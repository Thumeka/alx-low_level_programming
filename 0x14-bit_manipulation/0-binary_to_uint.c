#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: pointer
*
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int bin = 0;
int c = 0;
if (b == NULL)
return (0);
while (b[c] != '\0')
{
if (b[c] != '0' && b[c] != '1')
return (0);
bin <<= 1;
bin += b[c] - '0';
c++;
}
return (bin);
}
