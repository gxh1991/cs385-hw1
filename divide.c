// #include "user.h"
#include <stdio.h>

void divide(int a, int b) 
{
    // valid input b != 0?
    if (b == 0)  {
        printf("The divisor cannot be 0");
        return;
    }
    if (a < b) {
        printf("%d",0);
        return;
    }

    float ans = (float)a / b;
    ans = (int)(ans * 100) / 100.0;
    // a/b == Integer or float?
    if (ans - (int)ans == 0.0) {
        printf("%d", (int)ans);
    } else if(ans*10 - (int)(ans*10) == 0.0) {
        printf("%d", (int)ans);
        float first = ans*10 - (int)(ans*10);
        printf(".");
        printf("%d",(int)first);
    } else {
        printf("%d", (int)ans);
        printf(".");
        float first = ans*10 - (int)(ans*10);
        printf("%d",(int)first);
        float second = first*10 - (int)(first*10);
        printf("%d",(int)second);
    }
    printf("\n");
}

int main() {
    divide(8,5);
}