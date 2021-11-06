#include <stdio.h>
#include <malloc.h>
//#define LEN(x)    (sizeof(x) / sizeof(x[0])
void nod_nok(int a, int b, int arr[2])
{
    int or_a = a;
    int or_b = b;
    int c;
    while ((a != 0) && (b != 0))
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    int nod = a + b;
    int nok = or_a / nod * or_b;
    arr[0] = nod;
    arr[1] = nok;
}
int mas(int n, int array[]) // int **m, //size_t *len)
{
    int i = 0;
    int temp = n;
   // int * result = (int*)malloc(10);
    while (temp>0) {
        array[i] = temp % 10;
        temp = temp / 10;
        i ++;
    }
    return i;
}

int main() {
    printf("Task 1\n");
    int arr[2];
    int a;
    int b;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter a: \n");
    scanf("%d", &b);
    nod_nok(a,b,arr);
    printf("%d %d\n", arr[0],arr[1]);
    printf("Task 2\n");
    printf("Enter n: \n");
    int n;
    scanf("%d", &n);
    int array[10];
    int len = mas(n, array);
    for (int i = len - 1; i>=0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
