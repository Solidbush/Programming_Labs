#include <stdio.h>

int main()
{
    int a;
    char s;
    int sus;
    
    printf("Если вы хотите ввести десятичное число: введите '0', если вы хотите ввести симмвол: введите '1': ");
    scanf("%d\n", &sus);
    if (sus == 0)
    {
        scanf("%d", &a);
        printf("%d", a);
    }
    if (sus == 1)
    {
        scanf("%c", &s);
        printf("%c", s);
    }
    return 0;
}