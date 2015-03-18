#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------↑头文件声明分割线---------*/

int start,endd;
int s,e,vim;
int hour,mini;
/*---------↑定义变量分割线-----------*/




int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 

cin>>start>>endd;
s=(start/100)*60+(start%100);
e=(endd/100)*60+(endd%100);
vim=e-s;
hour=vim/60;
mini=vim%60;
printf("%02d:%02d\n",hour,mini);
    

	
/*---------------The end-------------*/
	return 0;
} 


