#include <stdio.h>
int n,m,i,j;
int num=0,count=0;
int ju(int s)
{
  if (s==1) return 0;
  if (s==2 || s==3 || s==5 || s==7 || s==11 || s==13 || s==17 || s==19 || s==23 || s==29) return 1;
  if (s%2==0) return 0;
  if (s%3==0) return 0;
  if (s%5==0) return 0;
  if (s%7==0) return 0;
  if (s%11==0) return 0;
  if (s%13==0) return 0;
  if (s%17==0) return 0;
  if (s%19==0) return 0;
  if (s%23==0) return 0;
  if (s%29==0) return 0;
  return 1;
}
	

int main()
{
	scanf("%d %d",&m,&n);
	for (j=m;j<=n;j++)
	{
		if (ju(j)) {count++;num+=j;}				
	}
	
	
	printf("%d %d",count,num);
	return 0;
}
