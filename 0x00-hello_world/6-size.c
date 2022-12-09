#include <stdio.h>

/**
*	main - print the size of various types
*	Description: prints the size of various types on the computer it is compiled
*	Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of an char: %c byte(s)\n", sizeof(int));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of an float: %f byte(s)\n", sizeof(float));
	printf("Size of a long int: %u byte(s)\n", (int) sizeof(long int));
	return (0);
}
