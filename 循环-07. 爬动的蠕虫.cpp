#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/

int n,u,d;
int m,s;
/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

cin>>n>>u>>d;
for (m=1,s=u;;m++,s+=u)
{
	if (s>=n) {printf("%d\n",m);return 0;}
	else {s-=d;m++;}
}







/*---------------The end-------------*/
	return 0;
}


