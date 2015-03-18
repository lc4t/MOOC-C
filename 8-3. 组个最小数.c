#include <stdio.h>
#include <stdlib.h>
/*---------↑头文件声明分割线---------*/
#define INF 0x7fffffff

int num[11]={0};
int i,j,k,m,n;
int _first;

/*---------↑定义变量分割线-----------*/


int _find_first()
{
	int i=1;
	for (;;i++)	if (num[i]!=0) return i;
}





/*----------函数分割线----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 
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


