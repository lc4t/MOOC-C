#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/
char a[102];
int p;
int i,j,k,l,m,n;
char c='a';
/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);





/*---------------��д��--------------*/ 
for(i=1;;i++)
{
	c=getchar();
	if (c!='\n')	a[i]=c;
	else break;
}
scanf("%d",&p);
p%=(i-1);
for (j=p+1;j<=i-1;j++) cout<<a[j];
for (j=1;j<=p;j++) cout<<a[j];



/*---------------The end-------------*/
	return 0;
} 


