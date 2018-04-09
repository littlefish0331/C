#include <stdio.h>
int main(void)
{

    float u, v, x, y, z, t1, t2;

    printf("Enter u:");
    scanf("%f", &u);
    printf("Enter v:");
    scanf("%f", &v);
    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);

    printf("u=%f; v=%f; x=%f; y=%f\n", u, v, x, y);

    t1=u*v;
    t2=x*y;
    z=t1+t2;
    printf("z=%f.\n", z);
}
