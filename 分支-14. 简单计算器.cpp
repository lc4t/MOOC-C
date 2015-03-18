#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/


int a,b;
char c; 
/*---------↑定义变量分割线-----------*/



/*----------函数分割线----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 



scanf("%d %c %d",&a,&c,&b);
switch(c)
{
	case '+':{cout<<a+b<<endl;break;}
	case '-':{cout<<a-b<<endl;break;}
	case '*':{cout<<a*b<<endl;break;}
	case '/':{cout<<a/b<<endl;break;}
	case '%':{cout<<a%b<<endl;break;}
	default:cout<<"ERROR"<<endl;
	
	
	
	
}



	
/*---------------The end-------------*/
	return 0;
} 


