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
int x=1;
/*---------����������ָ���-----------*/


/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 

scanf("%d",&n);

for (n=n-1;n>=1;n--)
{
	x=(++x)*2;
}
printf("%d\n",x);



/*---------------The end-------------*/
	return 0;
}


