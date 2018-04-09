#include <stdio.h>
int main(){

    float income, rate, diff, tax;

    printf("Enter income:");
    scanf("%f", &income);

    if(income>4090000){
        rate=0.4;
        diff=721100;
    }else{
        if(income>2180000){
            rate=0.3;
            diff=312100;
        }else{
            if(income>1090000){
                rate=0.21;
                diff=115900;
            }else{
                if(income>410000){
                    rate=0.13;
                    diff=28700;
                }else{
                    rate=0.06;
                    diff=0;
                }
            }
        }
    }

    tax=income*rate-diff;
    printf("tax=%.3f", tax);

}
