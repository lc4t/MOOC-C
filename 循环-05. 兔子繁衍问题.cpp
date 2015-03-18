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
int i;
/*---------↑定义变量分割线-----------*/

int fbnq(int num)
{
	if (num==1) return 1;
	if (num==2) return 1;
	return fbnq(num-1)+fbnq(num-2);
	
}

/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------编写区--------------*/ 

cin>>n;
for (i=1;;i++)
{
	if (fbnq(i)>=n){printf("%d\n",i);return 0;}
}


/*---------------The end-------------*/
	return 0;
}


