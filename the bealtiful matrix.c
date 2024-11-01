#include <stdio.h>
#include <stdlib.h>
int main(){

    int matriz[5][5];
    int i,soma=0;

    for(i = 0;i < 5;i++){
        for(int j = 0; j < 5;j++){
            scanf(" %d",&matriz[i][j]);
            if(matriz[i][j] == 1){
                soma = abs(2 - i) + abs(2 - j);
            }
        }
    }
    printf("%d",soma);
    return(0);
}