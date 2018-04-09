#include <stdio.h>
int main(void)
{
    int x;
    int y;
    char z;

    printf("Enter x:");
    scanf("%d", &x);

    printf("Enter y:");
    scanf("%d", &y);

    printf("x=%d \ny=%d \n", x, y);

    if((x>=60)&&(y>=60)){
        z='A';
    }else if((x<60)&&(y<60)){
        z='C';
    }else{
        z='B';
    }

    printf("z=%c. \n", z);

}
