#include <stdio.h>
int a,b,c;
int main()
{
	scanf("%d %d %d",&a,&b,&c);
	if (a==b) printf("C");
	if (b==c) printf("A");
	if (a==c) printf("B");	
	return 0;
}
