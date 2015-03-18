#include <stdio.h>
char c;
int count=0;
int first=1;
int main()
{
	for (;;)
	{
		scanf ("%c",&c);
		if (c==' ') {
		             if (count!=0) 
	                            	{ if (first==1) {printf("%d",count); first=0;}                                      	
		                              else printf(" %d",count); }
		             count=0;continue;		
		            }
		else if (c=='.' && count!=0) 
		
		{
		if (first==1) {printf("%d",count);return 0;}
		printf(" %d",count);return 0;
		}
		
		else if (c=='.' && count==0) return 0;
		else {count++;}
	}
		return 0;
} 
