#include <stdio.h>

int s=0;
int a=0;
int main()
{
    scanf("%d",&s);
	a=s*12/30.48; 
    printf("%d %d",	a/12,a%12);
	
	return 0;
	
}
