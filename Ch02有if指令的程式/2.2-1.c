#include <stdio.h>
int main(void)
{
    int x;
    int y;

    printf("Enter x:");
    scanf("%d", &x);

    if(x<30){
        y=50;
    }else if(x<60){
        y=70;
    }else{
        y=100;
    }

    printf("y=%d.\n", y);

}

