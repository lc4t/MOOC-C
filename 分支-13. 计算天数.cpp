#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

int is_leap_year(int year)
{
	if (year%4==0 && year%100!=0) return 1;
	else if (year%400==0) return 1;
	else return 0;
}


/*----------函数分割线----------------*/ 
int y,m,d;
int t=0;


/*---------↑定义变量分割线-----------*/
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 


scanf("%d/%d/%d",&y,&m,&d);

if (is_leap_year(y)==0)

	switch (m)
	{
		case 1:{cout<<d<<endl;break;}
		case 2:{cout<<d+31<<endl;break;}
		case 3:{cout<<d+59<<endl;break;}
		case 4:{cout<<d+90<<endl;break;}
		case 5:{cout<<d+120<<endl;break;}
		case 6:{cout<<d+151<<endl;break;}
		case 7:{cout<<d+181<<endl;break;}
		case 8:{cout<<d+212<<endl;break;}
		case 9:{cout<<d+243<<endl;break;}
		case 10:{cout<<d+273<<endl;break;}
		case 11:{cout<<d+304<<endl;break;}
		case 12:{cout<<d+334<<endl;break;}
		
	}
else switch (m)
{
		case 1:{cout<<d<<endl;break;}
		case 2:{cout<<d+31<<endl;break;}
		case 3:{cout<<d+59+1<<endl;break;}
		case 4:{cout<<d+90+1<<endl;break;}
		case 5:{cout<<d+120+1<<endl;break;}
		case 6:{cout<<d+151+1<<endl;break;}
		case 7:{cout<<d+181+1<<endl;break;}
		case 8:{cout<<d+212+1<<endl;break;}
		case 9:{cout<<d+243+1<<endl;break;}
		case 10:{cout<<d+273+1<<endl;break;}
		case 11:{cout<<d+304+1<<endl;break;}
		case 12:{cout<<d+334+1<<endl;break;}
	
}
	
	





	
/*---------------The end-------------*/
	return 0;
} 


