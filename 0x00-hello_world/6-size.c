#include <stdio.h>
/**
 * main - main function
 * Return: returns zero
 */

int main(void)
{
	int int_num = 0;
	char ch = ' ';
	float float_num = 0.0f;
	double dbl_num = 0.0;

	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
