#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------↑头文件声明分割线---------*/
int a[5];


/*---------↑定义变量分割线-----------*/




int main(){ 
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 




cin>>a[1]>>a[2]>>a[3];
sort(a+1,a+4);
cout<<a[1]<<"->"<<a[2]<<"->"<<a[3]<<endl;






	
/*---------------The end-------------*/
	return 0;
} 


