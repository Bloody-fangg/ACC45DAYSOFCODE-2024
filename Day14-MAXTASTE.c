#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,d,x,y;
	  scanf("%d%d%d%d",&a,&b,&c,&d);
	     if(a>b)
	    x=a;
	        else
	        x=b;
	    
	    if(c>d)
	      y=c;  
	    
	    else
	    y=d;
	        printf("%d\n",x+y);
	    
	}
	return 0;
}
