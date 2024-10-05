#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n,i,temp,count=0;
	   scanf("%d",&n);
	   int a[n];
	   for(i=0; i<n; i++)
	   {
	   scanf("%d",&a[i]);
	   }
	   for(i=0; i<n-1; i++)
	   {
	      if(a[i]>a[i+1])
	      {
	          temp=a[i];
	          a[i]=a[i+1];
	          a[i+1]=temp;
	          break;
	      }
	           
	       
	   }
	   for(i=0; i<n-1; i++)
	   {
	       if(a[i]>a[i+1])
	       {count++;
	       
	       }
	   }
	   if(count>0)
	   printf("NO\n");
	   else
	   printf("YES\n");
	}
	return 0;
}