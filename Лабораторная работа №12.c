#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE *f;
    f = fopen(argv[1], "w");
    int day = 0;
    int mon = 0;
    int year = 0;
    int i;
    printf("Enter today's date: \n");
    scanf("%d%d", &day, &mon);
    scanf("%d\n", &year);
    fprintf(f,"%d.%d.%d\n", day,mon,year);
    for (i = 0; i < 9; i++)
    {
        if (day + 1 > 30)
        {
            mon++;
            day=0;
            fprintf(f,"%d.%d.%d\n",day,mon,year);
            printf("%d.%d.%d\n",day,mon,year);
            day++;
        }
        else
            day++;
            fprintf(f,"%d.%d.%d\n",day,mon,year);
            printf("%d.%d.%d\n",day,mon,year);
    }
    fclose(f);
}
