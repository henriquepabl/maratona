#include <stdio.h>
int main(){
    
    int num1,n1 = 0;
    while(1){
        scanf("%d",&num1);
        if(num1 > n1){
            n1 = num1;
        }
        if(num1 == 0){
            break;
        }
    }
    printf("%d",n1);
    return(0);
}