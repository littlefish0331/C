#include <stdio.h>
int main(void)
{

    int x;

    printf("Enter x:");
    scanf("%d", &x);

    printf("x=%d\n", x);

    if(x<0){
        x=-x;
    }//�᭱��else�N�i�H���μg�F�C

    printf("x=%d\n", x);

}
