#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/

char a[88];
char c;
int i;

/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------��д��--------------*/ 

for (i=1;c!='\n';i++)
{
	c=getchar();
	a[i]=c;
}
i--;i--;
for (;i>=1;i--) cout<<a[i];



/*---------------The end-------------*/
	return 0;
} 


