#include <stdio.h>
#include <string.h>

int main(){

    int t,qtdestri,sizev;
    int aux = -1;
    int vet[100];
    char str[100];
  
 
    scanf("%d",&t); 


    while(t--){

        scanf("%d",&sizev);
        
        for(int i = 0; i < sizev;i++){
            scanf("%d ",&vet[i]);
        }
      
        scanf("%d ",&qtdestri);
        for(int i = 0; i < qtdestri;i++){
            aux = -1;
            scanf("%s",str);
            int temp;
            
            temp = strlen(str);
            if(temp > sizev){
                printf("NO\n");
            }
            else{
                for(int i = 0 ;i < sizev;i++){
                    if(aux > 0){
                        break;
                    }
                    for(int j = 0; j < sizev;j++){
                        if(aux > 0){
                           break;
                        }
                        if(vet[i] == vet[j]){
                            for(int k = 0; k < sizev;i++){
                                if(aux > 0){
                                    break;
                                }
                                for(int l = 0; l < sizev; l++){
                                    if(str[k] == str[l]){
                                        if(k == l && k == i && k == j){
                                            printf("YES\n");
                                            aux = 1;
                                            break;
                                        }
                                        else{
                                            aux = 1;
                                            printf("NO\n");
                                            break;
                                        }
                                    }
                                }
                            }   
                        } 
                    }
                }
            }
        }

    
    }


    return(0);
}