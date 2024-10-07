#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int w,x,y,z;
	    scanf("%d %d %d %d",&w,&x,&y,&z);
	    if(w==x || w==y || w==z || w==x+y || w==x+z || w==y+z || w==x+y+z)
	    {
	        printf("\n yes");
	    }
	    else
	    {
	        printf("\n no");
	    }
	}
	return 0;
}
