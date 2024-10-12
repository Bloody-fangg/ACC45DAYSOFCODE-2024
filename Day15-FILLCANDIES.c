#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,m;
	    scanf("%d%d%d",&n,&k,&m);
	    if(n%(k*m)==0){
	        printf("%d\n",n/(k*m));
	    }
	    else{
	        printf("%d\n",(n/(k*m))+1);
	    }
	}
	return 0;
}
