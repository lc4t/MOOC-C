
#include <stdio.h>


int  gcd(int a,int b)
{
  if (b==0) return a;
    else return gcd(b,a % b);
}

int x,y,t;
int main()
{
	scanf("%d/%d",&x,&y);
	t=gcd(x,y);
	printf("%d/%d",x/t,y/t);
	
	return 0;
}
