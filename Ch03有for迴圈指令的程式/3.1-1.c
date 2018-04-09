#include <stdio.h>
int main(void){

    int x, sum, i;

    for(sum=0, i=1;i<=5;i=i+1){
        printf("Enter x:");
        scanf("%d", &x);
        sum=sum+x;
    }

    printf("sum=%d. \n", sum);

    system("PAUSE");
    return 0;
}

