#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: using sizeof to print size of various data types
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %u bytes(s)", sizeof(char));
	printf("Size of an int: %u bytes(s)", sizeof(int));
	printf("Size of a long int: %u bytes(s)", sizeof(long int));
	printf("Size of a long long int: %u bytes(s)", sizeof(long long int));
	printf("Size of a float: %u bytes(s)", sizeof(float));
	return (0);
}
