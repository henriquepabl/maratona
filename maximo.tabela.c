#include <stdio.h>
int main(){
    int soma = 0,j = 0,i = 0,n;
    
    scanf("%d",&n);
    int vet[n][n];
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
           if(i == 0 || j == 0){
            vet[i][j] = 1;
           }
           else{
            vet[i][j] = vet[i-1][j]+ vet[i][j-1];
           }
           if(vet[i][j] > soma){
            soma = vet[i][j];
           }
        }
    }
    printf("%d",soma);
    return(0);
}