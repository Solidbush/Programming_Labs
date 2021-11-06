

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%x", &a);
	printf("\n");
	printf("2) %d\n", a);
	printf("\n");
	b = a >> 2;
	printf("3) %x %x\n", a, b);
	printf("\n");
	c = ~a;
	printf("4) %x %x\n", a, c);
	printf("\n");
	scanf_s("%x", &b);
	printf("\n");
	printf("5) %x", a | b);
}


