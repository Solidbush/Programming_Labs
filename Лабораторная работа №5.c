#include <iostream>
using namespace std;
int main(void)
{
	int arr[6] = { 34, 45, 56, 67, 78, 89 };
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int A[2][2] = { { 1, 1 }, { 0, 1 } };
	int B[2][2] = { { 2, 0 }, { 3, 0 } };
	int C[2][2] = { {},{} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}

		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}