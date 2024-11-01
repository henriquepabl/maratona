#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){

    char caracteres[MAX];
    int tamanho = 0;
    int temp = 0;


    scanf("%s",caracteres);
    tamanho = strlen(caracteres);

    for(int i = 0;i < tamanho;i++){
        if(caracteres[i] != '+'){
            for(int j = 0;j < tamanho;j++){
                if(caracteres[j] != '+'){
                    if(caracteres[j] > caracteres[i]){
                        temp = caracteres[j];
                        caracteres[j] = caracteres[i];
                        caracteres[i] = temp;
                    }
                }
            }
        }
    }
    for(int i = 0;i < tamanho;i++){
        printf("%c",caracteres[i]);
    }
 


    return(0);
}