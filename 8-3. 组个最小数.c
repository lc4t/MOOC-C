#include <stdio.h>
#include <stdlib.h>
/*---------��ͷ�ļ������ָ���---------*/
#define INF 0x7fffffff

int num[11]={0};
int i,j,k,m,n;
int _first;

/*---------����������ָ���-----------*/


int _find_first()
{
	int i=1;
	for (;;i++)	if (num[i]!=0) return i;
}





/*----------�����ָ���----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------��д��--------------*/ 
for (i=0;i<=9;i++) scanf("%d",&num[i]);



_first=_find_first();
printf("%d",_first);
num[_first]--;
for (i=0;i<=9;i++)
for (j=num[i];j>0;j--)
printf("%d",i);






/*---------------The end-------------*/
	return 0;
} 


