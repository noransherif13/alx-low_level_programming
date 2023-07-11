#include <stdio.h>

/**
 * main -print number of arguments passed
 * @argc:nmuber of commandline arguments
 * @argv:pointer to an array of command line arguments
 * Return:0-sucess, non-zero-fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
