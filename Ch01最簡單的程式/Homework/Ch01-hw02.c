#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,d,n,m;

    printf("a=");
    scanf("%f", &a);

    printf("b=");
    scanf("%f", &b);

    printf("c=");
    scanf("%f", &c);

    printf("d=");
    scanf("%f", &d);

    n=a+b;
    m=c-d;

    if(m==0){
        printf("(a+b)*d/(c-d)does not exist.\n");
    }else{
        printf("((a+b)/(c-d))*d=%f\n", d*n/m);
    }

    return 0;
}
