#include <stdio.h>
int main(){

    int x,y,z,i,n;
    int Sx=0,Sy=0,Sz=0;
    scanf("%d",&n);
    int mat[n][n];
    for(i = 0;i < n;i++){
        scanf("%d %d %d",&x,&y,&z);
        Sx += x;
        Sy += y;
        Sz += z;
    }
    if(Sx == 0 && Sy == 0 && Sz == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return(0);
}