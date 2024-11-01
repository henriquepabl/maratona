#include <stdio.h>
#include <string.h>
#define MAX 150

int main(){

    int t,k,q;
    int vet[MAX];
    int casos[MAX];
    int winners;
    int finnaly;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&k,&q);
        winners = 0;
        finnaly = 0;
        for(int i = 0; i < k;i++){
            scanf("%d",&vet[i]);
        }
        for(int i = 0; i < q;i++){
            scanf("%d",&casos[i]);
            winners = casos[i];
            
            for(int j = k-1; winners >= vet[0];j--){
                if(winners >= vet[j]){
                    winners--;
                }
            }
            finnaly = winners;
            printf("%d ",finnaly);
        }
        printf("\n");
    }
    return(0);

}