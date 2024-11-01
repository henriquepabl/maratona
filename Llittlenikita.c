#include <stdio.h>
#define MAXN 100
 
int main(){
 
	int m,n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		if(n < m){
			printf("No\n");
		}
		else if((n - m)%2 == 0){
			printf("Yes\n");
		}
		else if(n == m){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	
	return 0;
}