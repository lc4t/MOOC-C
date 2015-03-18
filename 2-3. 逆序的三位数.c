#include <stdio.h>
int num;;
int main()
{
	scanf("%d",&num);
	printf("%d",num/100+(num%100/10)*10+(num%10)*100);
	
	
	
	return 0;
}
