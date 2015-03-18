#include <stdio.h>
#include <math.h>
char a;
int n;
int m=0;
int k=1;
int i,j,k,number;
void out(int s)
{
	
	if (s==0) printf("ling");
	if (s==1) printf("yi");	
	if (s==2) printf("er");
	if (s==3) printf("san");
	if (s==4) printf("si");
	if (s==5) printf("wu");
	if (s==6) printf("liu");
	if (s==7) printf("qi");
	if (s==8) printf("ba");
	if (s==9) printf("jiu");
		
}

int cin()
{
	for(;;)
	{
		scanf("%c",&a);
		if (a=='\n') break;
		n=a-'1'+1;
		m+=n;
		
	}	
	return m;
}

int len(int num)
{
	int length=0; 
 	while (num/k!=0)
	{
		k*=10;length++;
	}
	return length;
}

void cout(int s)
{
	number=len(s);
	j=pow(10,number-1);    // 3weishu  100

	if (number==0) out(0);
	else 
	    for (i=j;i>=1;i/=10)
	    {
	    	if (i!=j) printf(" ");
			out(s/i);
			s-=(s/i)*i;
	    }
	
}
int main()
{
	
	cout(cin());
	
	
	
	
	
	
	return 0;
}
