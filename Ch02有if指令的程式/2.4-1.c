#include <stdio.h>
int main(void)
{
    int a, b, c;

    printf("The values of a, b and c shall be different.\n");
    printf("Please enter a:");
    scanf("%d", &a);

    printf("Please enter b:");
    scanf("%d", &b);

    printf("Please enter c:");
    scanf("%d", &c);

    if(b>c){
        if(a>b){
            printf("a is the largest.\n");
        }else{
            printf("b is the largest.\n");
        }
    }else{
        if(a>c){
            printf("a is the largest.\n");
        }else{
            printf("c is the largest.\n");
        }



    }


}
