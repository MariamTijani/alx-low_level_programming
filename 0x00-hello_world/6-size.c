include <stdio.h>
/**
 *
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	return (0);

}
