#include <stdio.h>
#include <string.h>
int main(){

    int i,soma = 0,n;
    char first;
    char last;
    int tamanho = 0;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        char name[101];
        scanf("%s",name);
        tamanho = strlen(name);
        if(tamanho > 10){
            first = name[0];
            last = name[tamanho - 1];
            soma = tamanho - 2;
            printf("%c%d%c\n",first,soma,last);
            
        }
        else{
            printf("%s\n",name);
        }
    }
    return(0);
}