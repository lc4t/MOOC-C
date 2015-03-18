#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

int num[100002]={0};
int i,j,t,m;
int a,n;
/*---------↑定义变量分割线-----------*/

void _add()  //高精加 
{

	for (i=n,j=1;i>=1;i--,j++)   // j是位数 ； i是次数 ； t是进位 m是本位； 
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

/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 

cin>>a>>n;

if (n==0) {printf("0\n");return 0;}

t=0;

_add();

_output();



/*---------------The end-------------*/
	return 0;
} 


