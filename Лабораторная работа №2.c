#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float ans, ans1;
    scanf("%f", &a);
    ans = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    ans1 = 4*cos(a/2)*cos(5/2*a)*cos(4*a);
    printf("z1 = %f\n", ans);
    printf("z2 = %f\n", ans1);
    return 0;
}