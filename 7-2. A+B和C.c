#include <stdio.h>
long long a,b,c;
int time;
int i;
void run(int n)
{
	
	scanf("%lld %lld %lld",&a,&b,&c);
	if (a+b>c) printf("Case #%d: true\n",n);
	else printf("Case #%d: false\n",n);
	
	return;
}


int main()
{
    scanf("%d",&time);
    for (i=1;i<=time;i++)
    {
    	run(i);    	
    }
	return 0;
}
