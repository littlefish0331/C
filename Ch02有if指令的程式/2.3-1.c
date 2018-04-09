#include <stdio.h>
int main(void)
{
    char membership;
    float total;
    float discount;

    printf("Enter membership:");
    scanf("%c", &membership);

    printf("Enter total:");
    scanf("%f", &total);

    switch(membership){
    case'a':
    case'A':
        discount=0.8;
        break;

    case'b':
    case'B':
        discount=0.9;
        break;

    default:
        discount=1;
        break;
    }

    total=total*discount;
    printf("total=%f\n", total);
    printf("total=%.0f\n", total);  //.02的作用是，規範小數點後面的位數。
    printf("total=%.1f\n", total);
    printf("total=%.2f\n", total);


}
