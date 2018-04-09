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

    if(x>=60){
        if(y>=60){
            z='A';
        }else{
            z='B';
        }
    }else{
        if(y>=60){
            z='B';
        }else{
            z='C';
        }
    }

    printf("z=%c. \n", z);

}
