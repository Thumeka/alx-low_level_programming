/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: number of base
* @index: index
*
* Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
