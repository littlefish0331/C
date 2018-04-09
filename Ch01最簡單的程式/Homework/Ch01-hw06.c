#include <stdio.h>
#include <stdlib.h>

int main(){
    float u,v,x,y,z,t1,t2;

    printf("(u,v,x,y)=");
    scanf("%f,%f,%f,%f", &u, &v, &x, &y);
    printf("(u,v,x,y)=(%f,%f,%f,%f)", u, v, x, y);

    t1=u*v;
    t2=x*y;
    z=t1+t2;


    printf("\nFinal answer=(u*v+x*y)=%f\n", z); //也可以在此才換行!

    return 0;
}
