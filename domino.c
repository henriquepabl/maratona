#include <stdio.h>
int main(){
    
    int m,n;
    int area;
    scanf("%d %d",&n,&m);
    area = m*n;
    int aux = 0;
    while(1){
        if(aux < area){
            aux += 2;
        }
        if(aux > area){
            aux -= 2;
            break;
        }
        if(aux == area){
            break;
        }
    }
    printf("%d",aux/2);


    return(0);
}