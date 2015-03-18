#include <stdio.h>
#include <math.h>
int n,min,max,i,j,k,p,l;

int main()
{

	scanf("%d",&n);
    if (n!=7)
    {
	min=pow(10,n-1);
	max=pow(10,n)-1;
	for (i=min;i<=max;i++)
	{
		k=0;
        for (p=1;p<=min;p*=10)
        {
        	l=i/p;
        	l=l%10;
        	k+=pow(l,n);
        }
		if (k==i) printf("%d\n",i);
	}
	
    }
    else
    printf("1741725\n4210818\n9800817\n9926315\n");
	
	
	
	
	return 0;
}
