#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/



int a,b,n,m;
int t=0;
/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

scanf("%d",&n);


if (n==0 || n==1)
{
	printf("No Solution\n");
		
	return 0;	
}



for (a=1;;a++)
{
	for (b=n;b>a;b--)
	{
		if (b*b>n) continue;
		if (a*a+b*b==n)
		{
			t=1;printf("%d %d\n",a,b);
		}
	}
	if (a*a>n) break;
	
}
a=sqrt(n);
if (a*a*2==n) 
{
	t=1;
	printf("%d %d\n",a,a);
}









if (t==0) printf("No Solution\n");
/*---------------The end-------------*/
	return 0;
}


