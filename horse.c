#include <stdio.h>
int main(){
    int count = 0;
    long long vet[4];
    for(int i = 0; i < 4;i++){
        scanf("%lld",&vet[i]);
    }
    for(int i = 0; i < 4;i++){
        for(int j = i+1; j < 4;j++){
            if(vet[i] > vet[j]){
                int temp = vet[j];
                vet[j] = vet[i];
                vet[i] = temp;
            }
    
        }
    }
    for(int i = 0; i < 4;i++){
        if(vet[i] == vet[i+1]){
            count++;
        }
    }
    printf("%d",count);

    return(0);
}
