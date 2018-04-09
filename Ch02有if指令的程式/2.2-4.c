#include <stdio.h>
int main(void)
{
    int x;
    int y;

    printf("Enter x:");
    scanf("%d", &x);

    if(x>=60){
        printf("English passed.\n");
    }else{
        printf("English failed.\n");
    }

    printf("Enter y:");
    scanf("%d", &y);

    if(y>=60){
        printf("Mathematics passed.\n");
    }else{
        printf("Mathematics failed.\n");
    }

}
