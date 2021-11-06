#include <stdio.h>
#include <string.h>

int main() {
    printf("Task 1\n");
    char mas[100];
    unsigned int len, k=0, let = 0, i;
    printf("Something...\n");

    scanf("%s",&mas);
    len=strlen(mas);
    for(i=0; i<len; i++)
    {
        if(((mas[i] >= 'A') && (mas[i] <= 'Z')) || ((mas[i]>='a') && (mas[i] <= 'z')))
            let +=1;
        if((mas[i] >= '0') && (mas[i] <='9'))
            k +=1;
    }
    printf("\nThe count 0..9: %d\n", k);
    printf("The count a..Z: %d\n", let);
    printf("Task 2\n");
    printf("Enter n:\n");
    int n;
    scanf("%d", &n);
    switch (n) {
       case 0:
           printf("Zero\n");
           break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Tree\n");
            break;
        case 4:
            printf("Fore\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("No option selected\n");
    }
}
