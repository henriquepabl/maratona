#include <stdio.h>
int main(){

    int num1;
    scanf("%d",&num1);
    if(num1 > 2 && num1%2 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return(0);
}