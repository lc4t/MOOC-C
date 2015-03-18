#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

int n,u,d;
int m,s;
/*---------↑定义变量分割线-----------*/



/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 

cin>>n>>u>>d;
for (m=1,s=u;;m++,s+=u)
{
	if (s>=n) {printf("%d\n",m);return 0;}
	else {s-=d;m++;}
}







/*---------------The end-------------*/
	return 0;
}


