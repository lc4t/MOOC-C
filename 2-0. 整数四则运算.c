#include <stdio.h>

int a,b=0;

int main()
{

	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);  // 严谨 比对

	return 0;
}
