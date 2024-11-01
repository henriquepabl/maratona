#include <stdio.h>
int main(){
    int r,p;
    char porta;

    scanf("%d %d",&p,&r);
    if(p == 0){
        porta = 'C';
    }
    if(p == 1 && r == 0){
        porta = 'B';
    }
    if(p == 1 && r == 1){
        porta = 'A';
    }
    printf("%c",porta);
    return(0);
}