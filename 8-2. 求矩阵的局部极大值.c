#include <stdio.h>
#include <stdlib.h>
/*---------↑头文件声明分割线---------*/
#define INF 0x7fffffff
int m,n;
int num[22][22];
int i,j,k;
int count=0;

/*---------↑定义变量分割线-----------*/


void __init()
{
for (i=0;i<=m+1;i++)
for (j=0;j<=n+1;j++)
num[i][j]=INF;

for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
scanf("%d",&num[i][j]);
}

int _find_max(int i,int j)
{
	if (num[i][j]>num[i-1][j] && num[i][j]>num[i][j-1] && num[i][j]>num[i+1][j] && num[i][j]>num[i][j+1]) return num[i][j];
	else return num[i][j]-1;
}





/*----------函数分割线----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 
scanf("%d %d",&m,&n);
__init();
for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
{
	if (_find_max(i,j)==num[i][j]) 
	{
		count++;
		printf("%d %d %d\n",num[i][j],i,j);
	}
}

if (count==0) printf("None %d %d",m,n);




/*---------------The end-------------*/
	return 0;
} 


