#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------��ͷ�ļ������ָ���---------*/

double s=0;
int tim=0,ss=0;
int ad=0;


/*---------����������ָ���-----------*/




int main(){ 


ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

cin>>s>>tim;
int ss=s*10;
ad=tim/5*2;
if (ss<=30) cout<<10+ad<<endl;
else if (ss>30 && ss<=100) printf("%.0f\n",10+(ss-30)*0.2+ad);
else if (ss>100 )printf("%.0f\n",24+(ss-100)*0.3+ad);


	
/*---------------The end-------------*/
	return 0;
} 


