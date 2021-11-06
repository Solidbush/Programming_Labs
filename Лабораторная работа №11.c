#include <stdio.h>
#include <stdlib.h>
#include "cmake-build-debug/funcs.h"

int main() {
    struct rectangle test;
    printf("Enter a_x and a_y:\n");
    scanf("%d %d", &test.a_x, &test.a_y);
    printf("Enter b_x and b_y:\n");
    scanf("%d %d", &test.b_x, &test.b_y);
    printf("Enter c_x and c_y:\n");
    scanf("%d %d", &test.c_x, &test.c_y);
    printf("\n");
    int *p;
    p = &test;
    printf("Perimetr: %f\n", P(p));
    printf("Ploshad: %f\n", S(p));
    return 0;
}
