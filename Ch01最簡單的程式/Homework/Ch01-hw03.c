#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,ans;

    printf("(a,b)=");
    scanf("%f, %f", &a, &b);

    ans=(a+b)*(a+b);

    printf("a*a+2a*b+b*b=%f", ans);

    return 0;
}
