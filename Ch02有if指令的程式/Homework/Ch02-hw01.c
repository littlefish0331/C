#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y;

    printf("輸入(x,y)=");
    scanf("%f,%f", &x, &y);

    if(x>=y){
        printf("x=%f\n", x);
        //printf("y=%f\n", y);
        //如果你前面輸入數值的地方沒有正確輸入
        //那後面程式還是會執行，只是y的值會是0。
    }else{
        printf("%f\n", y);
    }

    system("PAUSE");
    return 0;
}
