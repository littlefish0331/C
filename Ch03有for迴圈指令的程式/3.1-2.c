#include <stdio.h>
int main(void){

    int N, x, sum, i;

    printf("Enter N:");
    scanf("%d", &N);

    for(sum=0, i=1;i<=N;i=i+1){
        printf("Enter x:");
        scanf("%d", &x);
        sum=sum+x;
    }

    printf("sum=%d. \n",sum);
}
