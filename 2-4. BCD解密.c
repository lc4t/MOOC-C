#include <stdio.h>
int a=0,b=0;
int main()
{
	scanf("%d",&a);
	if (a/16!=0)
	{printf("%d%d",a/16,a%16);}
	if (a/16==0)
	{
		printf("%d",a%16);
	}
	return 0;
}
