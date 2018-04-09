#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y,u,v,n,m;

    printf("Enter x=");
    scanf("%f", &x);

    printf("Enter y=");
    scanf("%f", &y);

    printf("Enter u=");
    scanf("%f", &u);

    printf("Enter v=");
    scanf("%f", &v);

    n=x+y;
    m=u+v;

    if(m==0){
        printf("(x+y)/(u+v)does not exist.\n");
    }else{
        printf("(x+y)/(u+v)=%f\n", n/m);
    }

    return 0;
}
