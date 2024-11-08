#include <stdio.h>
#define MAX 200000

void mergesort(long int vet[MAX], long int aux[MAX],int min,int max);
void merge(long int vet[MAX],long int aux[MAX],int min,int mid,int max);
int main(){

    int t;
    long int maxdif;;
    int n;
    int ans;
    long int array[MAX];
    long int aux[MAX];

    scanf("%d",&t);
    
    while(t--){
        ans = 1;
        int sqfinal = 0;
        scanf("%d %ld",&n,&maxdif);
        for(int i = 0; i < n;i++){
            scanf("%ld",&array[i]);
        }
        if(n <= 1) sqfinal = 0;
        else{
            mergesort(array,aux,0,n-1);    
            for(int i = 0; i < n-1;i++){
                if(array[i+1] - array[i] <= maxdif){
                    ans += 1;
                }
                else{
                    if(ans > sqfinal){
                        sqfinal = ans;
                    }
                    ans = 1;
                }
            }
        }
        if(ans > sqfinal){
            sqfinal = ans;
        }
        printf("%d\n",n-sqfinal);

    }
    
 
    return(0);
}
void mergesort(long int vet[MAX],long int aux[MAX],int min,int max){

    if(max <= min){
        return;
    }
    int mid = min + ((max - min)/2);
    mergesort(vet,aux,min,mid);
    mergesort(vet,aux,mid+1,max);
    merge(vet,aux,min,mid,max);

}
void merge(long int vet[MAX],long int aux[MAX],int min,int mid,int max){
    int i = min;
    int j = mid+1;

    for(int k = min; k <= max;k++){
        aux[k] = vet[k];
    }
    for(int k = min; k <= max;k++){

        if(i > mid){
            vet[k] = aux[j++];
        }
        else if(j > max){
            vet[k] = aux[i++];
        }
        else if(aux[i] > aux[j]){
            vet[k] = aux[j++];
        }
        else{
            vet[k] = aux[i++];
        }
    }
}
