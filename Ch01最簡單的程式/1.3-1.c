#include <stdio.h>
int main(voi)

{
    float u, x, y, z, t;

    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);

    printf("Enter z:");
    scanf("%f", &z);

    printf("x=%f; y=%f; z=%f\n", x, y, z);

    t=x*y;
    t=z+t;
    u=t/3;
    printf("u=%f.\n", u);


}
