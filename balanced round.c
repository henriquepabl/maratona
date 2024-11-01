#include <stdio.h>
#include <math.h>

void insertionsort(int n,long long vet[]);

int main(){

    int testes,n,k,ans = 0;
    long long vet[10000];
    scanf("%d\n",&testes);

    while(testes--){
        scanf("%d %d\n",&n,&k);
        for(int i = 0; i < n;i++){
            scanf("%lld ",&vet[i]);
        }
        insertionsort(n,vet);
        int aux = 0;
        ans = 0;
        for(int i = 0; i < n -1;i++){
            if(fabs(vet[i] - vet[i+1]) <= k){
                ans++;
            }
            else{
                if(ans > aux){
                    aux = ans;
                }
                ans = 0;
            }
        }
        if(ans > aux){
            aux = ans;
        }
        printf("%d\n",n-(aux+1));
        
    }
    return(0);
}


void insertionsort(int n,long long vet[]){
    long long aux = 0;
    for(int i = 1;i < n-1;i++){
        aux = vet[i];
        int j = i - 1;

        while(j >= 0 && vet[j+1] > aux){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = aux;

    }

}