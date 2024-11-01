#include <stdio.h>
#define MAX 50

int main(){

    int vet[MAX];
    int t,k,aux;
    int par = 0,impar = 0;
    scanf("%d",&t);
    

    while(t--){
        scanf("%d",&k);
        aux = 0;
        impar = 0;
        par = 0;
        for(int i = 0; i < k;i++){
            scanf("%d",&vet[i]);
        }
        for(int i = 0;i < k;i++){
            if(i%2 == 0 && vet[i]%2 == 1){
                impar += 1;
            }
            else if(i%2 == 1 && vet[i]%2 == 0){
                par += 1;
            }
        }
        if(par == impar){
            aux = impar;
        }
        else if(par != impar){
            aux = -1;
        }

        printf("%d\n",aux);
    }
   

    return(0);
}