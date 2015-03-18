#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/


double a3,a2,a1,a0,a,b,t;

/*---------����������ָ���-----------*/

double f(double x)
{
	return a3*x*x*x+a2*x*x+a1*x+a0;
}

/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

cin>>a3>>a2>>a1>>a0;
cin>>a>>b;
for (;;)
{
    if (fabs(f(a))==0) {printf("%.2f",a);return 0;}
    if (fabs(f(b))==0) {printf("%.2f",b);return 0;} 
	if (b-a<0.001) {printf("%.2f",(a+b)/2);return 0;}
	t=f((a+b)/2);   
	if (t==0) {printf("%.2f",(a+b)/2);return 0;}
	if (t*f(a)>0) {a=(a+b)/2;continue;}
	if (t*f(b)>0) {b=(a+b)/2;continue;}
	
	
}

/*---------------The end-------------*/
	return 0;
}


