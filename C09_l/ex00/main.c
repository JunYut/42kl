#include "header.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{
	printf("ft_putchar: ");
	ft_putchar('C');
	printf("\n\n");
	
	//_________________________________________________________________________
	int a = 69, b = 420;

	printf("Before ft_swap: a(%d), b(%d)\n", a, b);
	ft_swap(&a, &b);
	printf("After ft_swap: a(%d), b(%d)\n\n", a, b);

	//_________________________________________________________________________
	write(1, "ft_putstr: ", 12);
	ft_putstr("Hello World");
	printf("\n\n");

	//_________________________________________________________________________
	char* s = "Joe mama";

	printf("Strlen of \"%s\": %d\n", s, ft_strlen(s));
	printf("\n");
	//_________________________________________________________________________
	char* s1 = "Hello w";
	char* s2 = "Hello World";

	printf("Original: %d\n", strcmp(s2, s2));
	printf("ft: %d\n", ft_strcmp(s2, s2));
}