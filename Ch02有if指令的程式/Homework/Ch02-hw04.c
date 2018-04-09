#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    float x,y,u,v,m,n,ans;
    printf("輸入x=");
    scanf("%f", &x);
    printf("輸入y=");
    scanf("%f", &y);
    printf("輸入u=");
    scanf("%f", &u);
    printf("輸入v=");
    scanf("%f", &v);

    n=x+y;
    m=u-v;

    if(m==0){
        printf("error.\n");
        return 0;   //到這邊就會直接跳出。不能用break唷!!
                    //break 陳述式用於搭配條件式switch 陳述式和do-while、for 及while 迴圈陳述式。
    }

    if(n/m>=2){
        ans=x-y;
    }else{
        ans=m;
    }

    printf("ans=%f.\n", ans);

    system("PAUSE");
    return 0;
}
