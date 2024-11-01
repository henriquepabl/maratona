#include <stdio.h>
int main(){

    int lamp1 = 0,lamp2 = 0,i=0,n1,num1;

    scanf("%d",&n1);
    while(i < n1){
        scanf("%d",&num1);
        if(num1 == 1){
            lamp1 = !lamp1;
        }
        if(num1 == 2){
            lamp1 = !lamp1;
            lamp2 = !lamp2;
        }
        i++;
    }
    printf("%d\n%d",lamp1,lamp2);
    
    return(0);
}