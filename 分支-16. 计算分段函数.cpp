#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/
double x; 


/*---------����������ָ���-----------*/


/*----------�����ָ���----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------��д��--------------*/ 


cin>>x;
if (x-0>1e-10 || fabs(x-0)<1e-10) printf("f(%.2f) = %.2f",x,sqrt(x));
else
printf("f(%.2f) = %.2f",x,(x+1)*(x+1)+2*x+1.0/x);
	
/*---------------The end-------------*/
	return 0;
} 


