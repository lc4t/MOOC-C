#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/


int a,b;
char c; 
/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------��д��--------------*/ 



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


