#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/


long long n,p,q;
long long j,k,s;
/*---------����������ָ���-----------*/

int isP(long long m)
{
	if (m==1) return 0;
	int i=2;
	for (i=2;i*i<=m;i++)		if (m%i==0) return 0;
	return 1;
}


/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------��д��--------------*/ 

cin>>n;
for (j=2;j<n;j++)
{
	if (isP(j)&&isP(n-j)) {printf("%lld = %lld + %lld\n",n,j,n-j);return 0;}
}

 




/*---------------The end-------------*/
	return 0;
}


