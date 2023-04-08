#include "main.h"
/**
* get_bit - returns value of a bit at given index in a decimal number
* @index: the index of the bit
* @n: the range
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int k = 1;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
k <<= index;
return ((n & k) ? 1 : 0);
}
