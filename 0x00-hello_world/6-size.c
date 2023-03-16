#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 when successful
 */
int main(void)
{
	 printf("The size of char is %lu byte(s)", sizeof(char));
         printf("The size of short is %lu byte(s)", sizeof(short));
         printf("The size of int is %lu byte(s)", sizeof(int));
         printf("The size of long is %lu byte(s)", sizeof(long));
         printf("The size of long long is %lu byte(s)", sizeof(long long));
         printf("The size of float is %lu byte(s)", sizeof(float));
         printf("The size of double is %lu byte(s)", sizeof(double));
         printf("The size of long double is %lu byte(s)", sizeof(long double));
	 return (0);
}
