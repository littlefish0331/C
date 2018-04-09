#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y, z;

    printf("輸入x=");
    scanf("%f", &x);
    printf("輸入y=");
    scanf("%f", &y);

    if(x>0){
        if(y>0){
            z=1;
        }
    }else{
        z=0;
    }

    printf("z=%f\n", z);

    return 0;
}
