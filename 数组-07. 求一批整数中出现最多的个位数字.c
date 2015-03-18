#include <stdio.h>
#include <stdlib.h>
/*---------↑头文件声明分割线---------*/
int num[11]={0};
int ts[11]={0};
char c;
int i,j,k,n;
int _min;
int count=0;
/*---------↑定义变量分割线-----------*/
void _cin(char m)
{
	switch (m)
	{
		case '0':{num[0]++;break;}
		case '1':{num[1]++;break;}
		case '2':{num[2]++;break;}
		case '3':{num[3]++;break;}
		case '4':{num[4]++;break;}
		case '5':{num[5]++;break;}
		case '6':{num[6]++;break;}
		case '7':{num[7]++;break;}
		case '8':{num[8]++;break;}
		case '9':{num[9]++;break;}
		default:{num[10]++;break;}
	}
	
}

int _find_min() //  num0-num9
{
	int k=-1;
	for (i=0;i<=9;i++)
	{
		if (num[i]>=k) k=num[i];
	}
	
	// 标记
	 for (i=0;i<=9;i++) 
	 {
	 	if (num[i]==k) {ts[i]=1;count++;}
	 }
	 return k;
}

/*----------函数分割线----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 
scanf("%d",&n);
c=getchar();
for (num[10]=1;num[10]<=n;)
{
	c=getchar();

	if (c!='\n') _cin(c);
	else break;	
}

_min=_find_min();



printf("%d:",_min);
for (i=0,j=1;i<=9,j<=count;i++) 
{
	if (ts[i]==1)	{printf(" %d",i);j++;}
	
}







/*---------------The end-------------*/
	return 0;
} 


