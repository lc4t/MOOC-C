#include <stdio.h>
int start,a,d;
int main()
{
	scanf("%d %d",&start,&d);
	a=start/100*60+start%100+d;
	printf("%d%02d",a/60,a%60);
	
	
	



return 0;

}

