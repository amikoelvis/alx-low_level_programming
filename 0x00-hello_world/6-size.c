#include <stdio.h>

/**
 * main - Entry point
 * print - Size of char
 * print - Size of int
 * print - Size of long int
 * print - Size of long long int
 * print - Size of float
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	prinff("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
