#include <stdio.h>
#include <stdlib.h>

int main(){
    float a1,b1,c1,a2,b2,c2;
    float ans1, ans2, delta;

    printf("a1x+b1y=c1, (a1,b1,c1)=");
    scanf("%f,%f,%f", &a1, &b1, &c1);
    printf("a2x+b2y=c2, (a2,b2,c2)=");
    scanf("%f,%f,%f", &a2, &b2, &c2);

    delta=a1*b2-a2*b1;
    ans1=(c1*b2-c2*b1)/delta;
    ans2=(c2*a1-c1*a2)/delta;

    printf("ans1=%f\n", ans1);
    printf("ans2=%f\n", ans2);
    return 0;
}
