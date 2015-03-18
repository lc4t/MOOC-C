#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

char a[88];
char c;
int i;

/*---------↑定义变量分割线-----------*/



/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------编写区--------------*/ 

for (i=1;c!='\n';i++)
{
	c=getchar();
	a[i]=c;
}
i--;i--;
for (;i>=1;i--) cout<<a[i];



/*---------------The end-------------*/
	return 0;
} 


