#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/
int s,e;
int sum=0;
int i;


/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------��д��--------------*/ 

cin>>s>>e;
for(i=0;i<=e-s;i++)
{
	if (i%5==4 && i!=e-s) printf("%5d\n",s+i);
	else printf("%5d",s+i);
	sum+=(s+i);
}

printf("\nSum = %d\n",sum);


/*---------------The end-------------*/
	return 0;
} 


