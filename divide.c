// #include "user.h"
#include <stdio.h>

void divide(int a, int b) 
{
    // valid input b != 0?
    if (b == 0)  {
        printf("The divisor cannot be 0 \n");
        return;
    }

    float ans = (float)a / b;
    int ans_int = (int)(ans * 100);
    char out[3] = {'0','0','0'};
    for (int i=2;i>=0;i--) {
        out[i] = (char)(ans_int - ans_int/10*10);
        ans_int = ans_int/10;
    }
    printf("%d",out[0]);
    if (out[1] == 0 && out[2] == 0) {
        printf("\n");
        return;
    }
    printf(".");
    printf("%d",out[1]);
    if (out[2] != 0) {
        printf("%d",out[2]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("The division needs TWO arguments!");
    }
    int a = argv[0] - '0';
    int b = argv[1] - '0';
    divide(a,b);
    exit();
 }