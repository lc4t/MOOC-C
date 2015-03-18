#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------↑头文件声明分割线---------*/

double x;

/*---------↑定义变量分割线-----------*/




int main(){ 
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 


cin>>x;
if (x<=15) printf("%.2f\n",4.0*x/3.0);
else printf("%.2f\n",2.5*x-17.5);






	
/*---------------The end-------------*/
	return 0;
} 


