#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/
int i,k,n;
int m[102],d[102];
/*---------↑定义变量分割线-----------*/
int gcd(int a, int b) {return (b==0)?a:gcd(b,a%b);}
/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 
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


