#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------��ͷ�ļ������ָ���---------*/

int year=0,t=0;
/*---------����������ָ���-----------*/




int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

cin>>year>>t;
if (year>=5 && t<=40)  printf("%.2f\n",50.0*t);
if (year>=5 && t>40)   printf("%.2f\n",2000+(t-40)*50.0*1.5);
if (year<5 && t<=40)  printf("%.2f\n",30.0*t);
if (year<5 && t>40)   printf("%.2f\n",1200+(t-40)*30.0*1.5);
    

	
/*---------------The end-------------*/
	return 0;
} 


