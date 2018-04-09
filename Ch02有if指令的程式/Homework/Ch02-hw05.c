#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x,y,z;

    printf("輸入x=");
    scanf("%f", &x);
    printf("輸入y=");
    scanf("%f", &y);

    if(x>=y){
        z=x*x;
    }else{
        z=y*y;
    }

    printf("z=%f\n", z);

    system("PAUSE");
    return 0;
}
