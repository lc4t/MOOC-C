#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/



/*---------↑定义变量分割线-----------*/

int a=0,b=0,c=0,d=0,e=0,n,x;
int i;
/*----------函数分割线----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 

cin>>n;
for (i=1;i<=n;i++)
{
	cin>>x;
	if (x>=90) a++;
	if (x>=80 && x<90) b++;
	if (x>=70 && x<80) c++;
	if (x>=60 && x<70) d++;
	if (x<60) e++;	
}
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;

	
/*---------------The end-------------*/
	return 0;
} 


