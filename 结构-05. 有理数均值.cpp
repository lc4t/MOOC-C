#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/
int i,k,n;
int m[102],d[102];
/*---------����������ָ���-----------*/
int gcd(int a, int b) {return (b==0)?a:gcd(b,a%b);}
/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 
scanf("%d",&n);
m[0]=0;d[0]=1;
for (i=1;i<=n;i++) 
{
	scanf("%d/%d",&m[i],&d[i]);
	m[0]=m[0]*d[i]+d[0]*m[i];
	d[0]*=d[i];
}

d[0]*=n;
if (m[0]==0) {printf("0\n");return 0;}
else if (m[0]%d[0]==0) {printf("%d",m[0]/d[0]);return 0;}
else 
{
	k=gcd(m[0],d[0]);m[0]/=k;d[0]/=k;
	printf("%d/%d",m[0],d[0]);
}
/*---------------The end-------------*/
	return 0;
}


