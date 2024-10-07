#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a;
        scanf("%d%d",&n,&a);
        if(n-a>=a){
            printf("%d\n",a);
        }
        else {
            printf("%d\n",n-a);
        }
    }
	
	return 0;
}
