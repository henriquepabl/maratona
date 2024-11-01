#include <stdio.h>
int main(){

    int h,a,soma = 0,altf;
    int i;
    
    scanf("%d %d",&a,&h);
    
    for(i = 0;i < a;i++){
        scanf("%d",&altf);
        if(altf > h){
            soma = soma + 2;
        }
        if(altf <= h){
            soma = soma + 1;
        }
    }   
    printf("%d",soma);
    return(0);
}