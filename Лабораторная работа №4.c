#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d", &a);
	((a >= 76) && (a <= 78)) ? printf("Yes\n") : printf("No\n");
	printf("\n");
	scanf_s("%x", &b);
	((b & (1 << 6)) > 0)? printf("Yes\n") : printf("No\n");
}


