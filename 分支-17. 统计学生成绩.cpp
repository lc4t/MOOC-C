#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/



/*---------����������ָ���-----------*/

int a=0,b=0,c=0,d=0,e=0,n,x;
int i;
/*----------�����ָ���----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------��д��--------------*/ 

cin>>n;
for (i=1;i<=n;i++)
{
	cin>>x;
	if (x>=90) a++;
	if (x>=80 && x<90) b++;
	if (x>=70 && x<80) c++;
	if (x>=60 && x<70) d++;
	if (x<60) e++;	
}
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;

	
/*---------------The end-------------*/
	return 0;
} 


