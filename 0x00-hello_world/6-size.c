#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s%lu%s\n", "Size of a char: ", sizeof(char), " byte(s)");
	printf("%s%lu%s\n", "Size of an int: ", sizeof(int), " byte(s)");
	printf("%s%lu%s\n", "Size of a long int: ", sizeof(long), " byte(s)");
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("%s%lu%s\n", "Size of a float: ", sizeof(float), " byte(s)");
	return (0);
}
