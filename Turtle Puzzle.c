#include <stdio.h>
#define MAX 50
int main(){


    int t,n1;
    int numeros[MAX];
    int soma = 0;

    scanf("%d\n",&t);

    while(t--){
        scanf("%d\n",&n1);
        soma = 0;
        for(int i = 0; i < n1;i++){
            scanf("%d",&numeros[i]);
            if(numeros[i] < 0){
                numeros[i] = numeros[i]*-1;
            }
            soma += numeros[i];
        }
        printf("%d\n",soma);
    }
    
    return(0);
}