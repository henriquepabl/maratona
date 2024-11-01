#include <stdio.h>
#include <string.h>
int main(){

    char name[101];
    char comparacao[101] = {"\0"};
    int i,tamanho;
    int soma = 0;
    int tamanho2 = 0;

    scanf("%s",name);
    tamanho = strlen(name);
    
    for(i = 0;i < tamanho;i++){
        if(strchr(comparacao,name[i]) == NULL){
            comparacao[tamanho2] = name[i];
            tamanho2++;
            comparacao[tamanho2] = '\0';
            soma++;
        }
    }
    if(soma%2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }

    return(0);
}