#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,flag=0;
	    scanf("%d",&n);
	    int a[n],i,t,sum1=0,sum2=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;;i++)
	    {
	        sum1+=a[i];
	        if(sum1%2!=0)
	        {
	            t=i;
	            break;
	        }
	    }
	    for(i=t+1;i<n;i++)
	    {
	        sum2+=a[i];
	        if((sum2%2!=0)&&(i==n-1))
	        {
	            flag=1;
	        }
	    }
	    if(flag)
	     printf("YES\n");
	    else
	     printf("NO\n");
	}
	return 0;
}
