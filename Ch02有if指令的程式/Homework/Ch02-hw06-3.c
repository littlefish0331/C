#include <stdio.h>
#include <stdlib.h>

//switch的缺點，只能用整數
//switch(status變數)而status只能為整數、長整數或字元變數。

int main(){
    float rate, diff, tax;
    int income;

    printf("Enter income=");
    scanf("%d", &income);

    switch(income){
    case 0 ... 410000:  //case 的種類若要有範圍，必須這樣打才行，這一空格!!
        rate=0.06;
        diff=0;
        break;

    case 410001 ... 1090000:
        rate=0.13;
        diff=28700;
        break;

    case 1090001 ... 2180000:
        rate=0.21;
        diff=115900;
        break;

    case 2180001 ... 4090000:
        rate=0.3;
        diff=213100;
        break;

    default:
        rate=0.4;
        diff=721100;
        //break;  //這邊就不一定要加這一行。
    }

    tax=(income*rate)-diff;
    printf("tax=%.3f.\n", tax); //%.3f代表後面顯示三位小數點。

    return 0;
}

//default當最後的時候，不一定要加上break
//但是當default不是最後一個的時候，也要放上break;


