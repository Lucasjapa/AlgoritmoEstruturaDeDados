#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int x, y, z;
float X = 3.1416;
float Y = 0.1700;
float Z = 82.6300;

int main()
{
	int d;
	int e = 0;
	int f;

	int *c, *b, *a;
	c = malloc(10000);
	b = malloc(10000);
	a = malloc(10000);

	*c = 0;
	*b = 0;
	*a = 0;
	int *ptr = 0;

	printf("%p    HIGH ADDRESS   \n", (void *)UINTPTR_MAX);
	printf("                 ------------------\n");
	printf("                 |       HEAP     |\n");
	printf("                 |        \u02C4\u02C4      |\n");
	printf("%p | c = %-10d |\n", c, *c);
	printf("%p | b = %-10d |\n", b, *b);
	printf("%p | a = %-10d |\n", a, *a);
	printf("                 |----------------|\n");
	printf("%p | d = %-10d |\n", &d, d);
	printf("%p | e = %-10d |\n", &e, e);
	printf("%p | f = %-10d |\n", &f, f);
	printf("                 |        \u02C5\u02C5      |\n");
	printf("                 |      STACK     |\n");
	printf("                 |----------------|\n");
	printf("                 |       .BSS     |\n");
	printf("                 |        \u02C4\u02C4      |\n");
	printf("%p | z = %-10d |\n", &z, z);
	printf("%p | y = %-10d |\n", &y, y);
	printf("%p | x = %-10d |\n", &x, x);
	printf("                 |----------------|\n");
	printf("                 |      .DATA     |\n");
	printf("                 |        \u02C4\u02C4      |\n");
	printf("%p | Z = %-10.4f |\n", &Z, Z);
	printf("%p | Y = %-10.4f |\n", &Y, Y);
	printf("%p | X = %-10.4f |\n", &X, X);
	printf("                 ------------------\n");
	printf("                 |      .TEXT     |\n");
	printf("                 ------------------\n");
	printf("%p      LOW ADRESS   \n", (void *)ptr);

	return 0;
}