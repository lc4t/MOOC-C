#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/
double a,b,c,d,e,f;
int i,j,k,l,m,n;

double sum;
/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------��д��--------------*/ 
cin>>a;
sum=1.0;
i=1;
b=1.0;
for (;;i++)
{
	b*=(1.0*i/((2*i+1)*1.0));
	sum+=b;
	if(b<a) {printf("%.6f\n",2*sum);return 0;}

	
} 
 




/*---------------The end-------------*/
	return 0;
}


