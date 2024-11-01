#include <stdio.h>
#include <stdlib.h>
int main(){
    int testes;
    long long m,n;
    
    scanf("%d",&testes);

    for(int i = 0;i < testes;i++){
        scanf("%lld %lld",&n,&m);
        if(n == 1){
            printf("0\n");
        }
        else if(n == 2){
             printf("%lld\n",m);
        }
        else{      
             printf("%lld\n",2*m);
        }    
    }
    return(0);
}