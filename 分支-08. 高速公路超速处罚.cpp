#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------↑头文件声明分割线---------*/

int v,vl;
double percent;
int per;
/*---------↑定义变量分割线-----------*/




int main(){ 
ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 

cin>>v>>vl;
percent=v*1.0/vl*100-100;

per=(int)(percent+0.5);
if (per>=10 && per<50) printf("Exceed %d%%. Ticket 200\n",per);
else if (per>=50) printf("Exceed %d%%. License Revoked\n",per) ;
else cout<<"OK"<<endl;











	
/*---------------The end-------------*/
	return 0;
} 


