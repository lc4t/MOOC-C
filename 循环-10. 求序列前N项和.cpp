#include <stdio.h>
int t,d,i,j,k;
int n;
double sum=0;
double a[5000];
void init(int s)
{
	a[1]=1;a[2]=2;a[3]=3;
	for (i=3;i<=s+3;i++) a[i]=a[i-1]+a[i-2];
	return ;
}

int main()
{
	scanf("%d",&n);
	init(n);
	for (j=1;j<=n;j++){sum+=(a[j+1]+0.0)/(a[j]+0.0);}
	printf("%.2f",sum);
	return 0;
}
