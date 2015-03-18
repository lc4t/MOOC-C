#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

int n,y,f;
/*---------↑定义变量分割线-----------*/



/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 
scanf("%d",&n);

for (y=0;y<100;y++)
{
	for (f=0;f<100;f++)
	 {
	 	if ((f*100+y-n==2*y*100+2*f) && (f*100+y>y*100+f)){ printf("%d.%d\n",y,f);return 0;}
	 }
}

printf("No Solution\n");
	


/*---------------The end-------------*/
	return 0;
}


