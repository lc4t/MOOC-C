#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

int c,d;
/*---------↑定义变量分割线-----------*/
int gcd(int a,int b)
{
	if (b==0) return a;
	else
	return gcd(b,a%b);
}

int lcm(int a,int b)
{
	return (a/gcd(a,b)*b);
}

/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 


scanf("%d %d",&c,&d);
printf("%d %d\n",gcd(c,d),lcm(c,d));


/*---------------The end-------------*/
	return 0;
}


