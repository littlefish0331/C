#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, t, x1, x2;

    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("Enter c:");
    scanf("%f", &c);

    printf("a=%f; b=%f; c=%f\n", a, b, c);

    t=(b*b)-(4*a*c);
    t=sqrt(t);
    x1=(-b+t)/(2*a);
    x2=(-b-t)/(2*a);
    printf("x1=%f; x2=%f.\n", x1, x2);

}
