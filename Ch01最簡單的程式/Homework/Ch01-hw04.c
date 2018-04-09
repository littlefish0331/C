#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,ans;

    printf("(a,b)=");
    scanf("%f, %f", &a, &b);

    ans=a*a-b*b;

    printf("a*a-b*b=%f", ans);

    return 0;
}

