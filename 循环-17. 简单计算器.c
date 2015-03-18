#include <stdio.h>

int n,m;
char c;

int main()
{
	scanf("%d",&n);
	while(scanf("%c",&c))
	{
		switch(c)
		{
			case '+':{scanf("%d",&m);;n+=m;break;} 
			case '-':{scanf("%d",&m);;n-=m;break;} 
			case '*':{scanf("%d",&m);;n*=m;break;} 
			case '/':{scanf("%d",&m);
			
			if (m!=0) {n/=m;break;}
			if (m==0) {	printf("ERROR\n");return 0;	}
			
			} 
			case '=':{printf("%d\n",n);return 0;}
			default:{printf("ERROR\n");return 0;}
		}
	}
	
	
	
	return 0;
}
