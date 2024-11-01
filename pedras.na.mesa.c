#include <stdio.h>
int main(){
    int soma = 0;
    int i;
    int npedras;
    char pedras[51];
   
    scanf("%d",&npedras);
    scanf("%s",pedras);
    for(i = 0;i < npedras -1 ;i++){
        if(pedras[i] == pedras[i+1]){
            soma++;
        }
        
    }
    printf("%d",soma);

    return(0);
}