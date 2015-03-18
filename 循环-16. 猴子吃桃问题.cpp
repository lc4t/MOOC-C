#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

int n;
int x=1;
/*---------↑定义变量分割线-----------*/


/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 

scanf("%d",&n);

for (n=n-1;n>=1;n--)
{
	x=(++x)*2;
}
printf("%d\n",x);



/*---------------The end-------------*/
	return 0;
}


