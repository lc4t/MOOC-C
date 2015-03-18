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
char s[88];
int len;
char c;
int i,t=0;
/*----------函数分割线----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 
for (i=1;;i++)
{
	s[i]=getchar();
	if (s[i]=='\n') {len=i-1;break;}
}
c=getchar();

for (i=1;i<=len;i++)
{
	if(s[i]==c) {t=i;break;}
	
}

if (t==0) cout<<"Not found"<<endl;
else
for (i=t;i<=len;i++) cout<<s[i];

	
/*---------------The end-------------*/
	return 0;
} 


