#include <stdio.h>
int main(void)
{

    float u, x, y, z;

    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);
    printf("Enter z:");
    scanf("%f", &z);

    printf("x=%f; y=%f; z=%f\n", x, y, z);

    u=(z+(x*y))/3;
    printf("u=%f. \n", u);
}

