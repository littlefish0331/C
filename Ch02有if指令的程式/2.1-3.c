#include <stdio.h>
int main(void)
{

    int x;

    printf("Enter x:");
    scanf("%d", &x);

    printf("x=%d\n", x);

    if(x<0){
        x=-x;
    }//後面的else就可以不用寫了。

    printf("x=%d\n", x);

}
