#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

void divide(int a, int b) 
{
    // valid input b != 0?
    if (b == 0)  {
        printf(1,"The divisor cannot be 0 \n");
        return;
    }
    int ans = a*100 / b;
    // int ans_int = (int)(ans * 100);
    int ans_int = ans;
    int out[3] = {0,0,0};
    for (int i=2;i>=0;i--) {
        out[i] = (ans_int - ans_int/10*10);
        ans_int = ans_int/10;
    }
    printf(1,"%d",out[0]);
    if (out[1] == 0 && out[2] == 0) {
        printf(1,"\n");
        return;
    }
    printf(1,".");
    printf(1,"%d",out[1]);
    if (out[2] != 0) {
        printf(1,"%d",out[2]);
    }

    printf(1,"\n");
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf(1,"The division needs TWO arguments!");
        exit();
        return 0;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf(1,"%d\n",a);
    printf(1,"%d\n",b);
    divide(a,b);
    exit();
    return 0;
 }