#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/



int n;
int i;
/*---------����������ָ���-----------*/

int fbnq(int num)
{
	if (num==1) return 1;
	if (num==2) return 1;
	return fbnq(num-1)+fbnq(num-2);
	
}

/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------��д��--------------*/ 

cin>>n;
for (i=1;;i++)
{
	if (fbnq(i)>=n){printf("%d\n",i);return 0;}
}


/*---------------The end-------------*/
	return 0;
}


