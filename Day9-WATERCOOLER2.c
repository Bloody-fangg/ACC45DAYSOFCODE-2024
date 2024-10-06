#include <stdio.h>

int main(void) {
	// your code goes here
	int Test_Cases;
	scanf("%d",&Test_Cases);
	while(Test_Cases--)
	{
	    int Renting_Cost,Purchasing_Cost;
	    scanf("%d%d",&Renting_Cost,&Purchasing_Cost);
	    if(Renting_Cost<Purchasing_Cost && Purchasing_Cost%Renting_Cost!=0)
	    {
	        printf("%d\n",Purchasing_Cost/Renting_Cost);
	    }
	    else if(Renting_Cost<Purchasing_Cost && Purchasing_Cost%Renting_Cost==0)
	    {
	        	        printf("%d\n",(Purchasing_Cost/Renting_Cost)-1);
	    }
	    else
	    {
	        printf("0\n");
	    }
	}
	return 0;
}
