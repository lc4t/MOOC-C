#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/

int num[100002]={0};
int i,j,t,m;
int a,n;
/*---------����������ָ���-----------*/

void _add()  //�߾��� 
{

	for (i=n,j=1;i>=1;i--,j++)   // j��λ�� �� i�Ǵ��� �� t�ǽ�λ m�Ǳ�λ�� 
{
	m=a*i+t;
	t=m/10;
	num[j]=m%10;
}

}

void _output()
{
	if (t>0) printf("%d",t);
    for (i=n;i>=1;i--) printf("%d",num[i]);
}

/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

cin>>a>>n;

if (n==0) {printf("0\n");return 0;}

t=0;

_add();

_output();



/*---------------The end-------------*/
	return 0;
} 


