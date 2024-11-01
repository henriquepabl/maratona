#include <stdio.h>
int main(){

    int pet,vasy,tony,i,soma = 0,prob;

    scanf("%d",&prob);

    for(i = 0;i < prob;i++){
        scanf("%d %d %d",&pet,&vasy,&tony);
        if(pet == 1 && (vasy == 1 || tony == 1)){
            soma++;
        }
        else if(vasy == 1 && (tony == 1 || pet == 1)){
            soma++;
        }
        else if(tony == 1 && (pet == 1 || vasy == 1)){
            soma++;
        }
    }
    printf("%d",soma);


    return(0);
}