#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t>0){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int min,max;
	    if(x>=y){
	        min =y;max = x;
	    }else{
	        min = x;max = y;
	    }
	    int c=0;
	    while(max<min*2){
	        min--;
	        c++;
	    }
	    printf("%d\n",c);
	    t--;
	}

}