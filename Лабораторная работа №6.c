#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Task 1:\n");
	printf("\n");
	float arr[4];
	float *a = arr;
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%f", a+i);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%2.1f ", *(a + i));
	}
	printf("\n");
	printf("\n");
	printf("Task 2:\n");
	printf("\n");
	int n;
	scanf_s("%d", &n);
	float* m = (float*)malloc(n * sizeof(float));
	for (int i = 0; i < n; i++)
	{
		scanf_s("%f", &m[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%2.1f ", *(m + i));
	}
	printf("\n");
	free(m);
}

