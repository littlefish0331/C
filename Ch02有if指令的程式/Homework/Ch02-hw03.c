#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y,u,v,m,n,z;

    printf("輸入x=");
    scanf("%f", &x);
    printf("輸入y=");
    scanf("%f", &y);
    printf("輸入u=");
    scanf("%f", &u);
    printf("輸入v=");
    scanf("%f", &v);

    m=x+y;
    n=u+v;

    if(m>n)z=m; //若程式只有一行，則不必加上{}，
    else z=n;

    printf("%f", z);

    system("PAUSE");
    return 0;
}
