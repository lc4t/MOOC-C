#include <stdio.h>
int t,d,i,j,k;
int n;
double sum=0;
double a[5000000];
void init(int s)
{
	a[1]=1;a[2]=2;a[3]=3;
	for (i=3;i<=s+3;i++) a[i]=a[i-1]+a[i-2];
	return ;
}

int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	scanf("%d",&n);
	init(n);
	for (j=1;j<=n;j++){printf("a[%d]=%.2f\n",j,a[j]);sum+=(a[j+1]+0.0)/(a[j]+0.0);printf("sum+%.2f=%.2f\n",(a[j+1]+0.0)/(a[j]+0.0),sum);}
	printf("%.2f",sum);
	return 0;
}
