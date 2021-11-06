#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[100], string2[100], string3[100], c;
    printf("Task 1 \n");
    printf("enter string 1\n");
    scanf("%s",&string1);
    printf("enter string 2\n");
    scanf("%s",&string2);
    printf("%s\n",strcat(string1,string2));
    printf("Task 2 \n");
    printf("enter string 1\n");
    scanf("%s",&string1);
    printf("enter string 2\n");
    scanf("%s",&string2);
    printf("%s\n",strncpy(string1,string2,2));
    printf("Task 3 \n");
    printf("enter string 1\n");
    scanf("%s",&string1);
    printf("enter symbol\n");
    fflush(stdin);
    scanf("%c",&c);
    char *ptr;
    ptr = strchr(string1, (char)c);
    if (*ptr)
        printf("%d\n", ptr - string1);
    else
        printf("Символ не найден\n");
    printf("Task 4 \n");
    printf("enter string 1\n");
    scanf("%s",&string1);
    printf("enter string 2\n");
    scanf("%s",&string2);
    ptr = strstr(string1, string2);
    if (*ptr)
        printf("%d\n", ptr - string1);
    else
        printf("Строка не найден\n");
    printf("Task 5 \n");
    printf("enter string 1\n");
    scanf("%s",&string1);
    printf("enter string 2\n");
    scanf("%s",&string2);
    printf("%d \n",strcspn(string1, string2));
}
