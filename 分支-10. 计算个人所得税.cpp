#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------↑头文件声明分割线---------*/

int m;
double s=0;

/*---------↑定义变量分割线-----------*/




int main(){ 
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 

cin>>m;
if (m<=1600) printf("%.2f",s);
else if (m>1600 && m<=2500) printf("%.2f",(m-1600)*0.05);
else if (m>2500 && m<=3500) printf("%.2f",(m-1600)*0.1);
else if (m>3500 && m<=4500) printf("%.2f",(m-1600)*0.15);
else if (m>4500) printf("%.2f",(m-1600)*0.2);


	
/*---------------The end-------------*/
	return 0;
} 


