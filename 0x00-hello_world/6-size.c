#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 on success
 */
int main(void)
{
printf("Size of char: %lu byte(s)", sizeof(char));
printf("Size of int: %lu byte(s)", sizeof(int));
printf("size of a long int: %lu byte(s)", sizeof(long int));
printf("sized of a long long int: %l byte(s)", sizeof(long long int));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
