#include <stdio.h>
/**
 *main - computes sizes of various data types
 *Return: zero
 */

int main(void)

{
	printf("Size of a char: %zu byte\(s\)\n", sizeof(c));
        printf("Size of an int: %zu byte\(s\)\n", sizeof(i));
        printf("Size of a long int: %zu byte\(s\)\n", sizeof(long int));
        printf("Size of a long long int: %zu byte\(s\)\n", sizeof(long long int));
        printf("Size of a float: %zu byte\(s\)\n", sizeof(f));
	return (0);

}
