#include <stdio.h>
int main(void)
{
    int x, y, z;

    printf("Enter x:");
    scanf("%d", &x);

    printf("Enter y:");
    scanf("%d", &y);

    printf("x=""%d""\n", x);
    printf("y=""%d""\n", y);

    z=x+y;

    printf("z=x+y=""%d"".""\n", z);     //以下這三種寫法是相同的
    printf("z=x+y=""%d.""\n", z);
    printf("z=x+y=%d.\n",z);

}
