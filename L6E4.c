#include <stdio.h>
#define MAX 200000
int main(){
    int sizeA,sizeB,t,aux = 0;
    char strA[MAX];
    char strB[MAX];
    scanf("%d",&t);
    while(t--){
        aux = 0;
        scanf("%d %d",&sizeA,&sizeB);
        scanf("%s",strA);
        scanf("%s",strB);    
        int i = 0;
        for(int j = 0; j < sizeB && i < sizeA;j++){
            if(strA[i] == strB[j]){
                i++;
                aux = i;
            }
        }
        printf("%d\n",aux);
    }
    return(0);
}