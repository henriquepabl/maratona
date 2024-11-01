#include <stdio.h>
int main(){

    int x1,x2,x3,ans = 0;

    scanf("%d %d %d",&x1,&x2,&x3);
    
     if (x1 > x2) {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if (x2 > x3) {
        int temp = x2;
        x2 = x3;
        x3 = temp;
    }
    if (x1 > x2) {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }
    ans = (x2 - x1) + (x3 - x2);
    printf("%d\n", ans);
    return(0);
}