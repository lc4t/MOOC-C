#include <stdio.h>
char c;
int main()
{
	for(;;)
	{
		scanf("%c",&c);
		if (c=='#') return 0;
		else if (c<='Z' && c>='A') printf("%c",c+('a'-'A'));
		else if (c<='z' && c>='a') printf("%c",c-('a'-'A'));
		else printf("%c",c);
	}
	
return 0;	
}
