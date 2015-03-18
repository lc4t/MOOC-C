#include <stdio.h>

int a,b,c,d;

int main()
{
	scanf("%d:%d",&a,&b);
	if (a>12) 	{	printf("%d:%d PM",a-12,b);	}
	if (a==12) 	{	printf("%d:%d PM",a,b);		}
	if (a<12) 	{	printf("%d:%d AM",a,b);		}

	return 0;
}
