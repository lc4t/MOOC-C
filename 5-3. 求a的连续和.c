#include <stdio.h>

int s[8];
int a,n;
int i=1,sum=0;
void init()
{
	s[1]=1;
	s[2]=11;
	s[3]=111;
	s[4]=1111;
	s[5]=11111;
	s[6]=111111;
	s[7]=1111111;
	s[8]=11111111;
	s[9]=111111111;
}
int main()
{
    init();
    scanf("%d %d",&a,&n);
	for (i=1;i<=n;i++) sum+=a*s[i];
	printf("%d\n",sum);
	return 0;
	
	
	
}
