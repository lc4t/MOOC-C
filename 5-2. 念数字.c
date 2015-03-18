#include <stdio.h>
#include <string.h>

void out(char s)
{
	if (s=='-') printf("fu");
	if (s=='0') printf("ling");
	if (s=='1') printf("yi");	
	if (s=='2') printf("er");
	if (s=='3') printf("san");
	if (s=='4') printf("si");
	if (s=='5') printf("wu");
	if (s=='6') printf("liu");
	if (s=='7') printf("qi");
	if (s=='8') printf("ba");
	if (s=='9') printf("jiu");
		
}


char a[20];
char m;
char ch[20];
int i=0;
int l=0;
int main()
{

	
	while(scanf("%c",&m) && m!='\n') 	
	{
	  if (i!=0) printf(" ");	
	  out(m);
	  i++;
	  
	  
	}
	  
	
	return 0;
}
