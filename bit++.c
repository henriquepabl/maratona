#include<stdio.h>
#include<string.h>
int main(){

    int x,i = 0,soma = 0 ;
    char a;
    char b;
    char c;
    scanf("%d",&x);

    for(i = 0;i < x;i++){
        scanf(" %c%c%c",&a,&b,&c);
        if(a == '-' && b == '-' && c == 'X'){
            --soma;
        }
        else if(a == 'X' && b == '+' && c == '+'){  
            soma++;
        }
        else if(a == '+' && b == '+' && c == 'X'){
            ++soma;
        }
        else if(a == 'X' && b == '-' && c == '-'){
            soma--;
        }
        
    }
    printf("%d",soma);

    return(0);
}