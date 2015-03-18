#include <stdio.h>
int num,n;



void gewei(int a)
{
	if (a==0) return;
	int i=1;
	for (i=1;i<=a;i++)
	{
		printf("%d",i);
	}
	return;
	
}

void shiwei(int a)
{
	if (a==0) return;
	int i=1;
	for (i=1;i<=a;i++)
	{
		printf("S");
	}
	return;
} 

void baiwei(int a)
{
	if (a==0) return;
	int i=1;
	for (i=1;i<=a;i++)
	{
		printf("B");
	}
	return ;
}

int main()

 {
 	scanf("%d",&n);
 	baiwei(n/100);
 	n-=(n/100)*100;
 	shiwei(n/10);
 	n-=(n/10)*10;
 	gewei(n);
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
