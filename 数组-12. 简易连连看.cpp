#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

char xy[8][8];
int n,m;
int i,j;
int cntwa=0;
int a,b,c,d,t;

/*---------↑定义变量分割线-----------*/

void _out()
{
	int x,y;
	for (x=1;x<=2*n;x++)
	{
		for (y=1;y<2*n;y++)	printf("%c ",xy[x][y]);
	    printf("%c\n",xy[x][y]);		
    }

} 

int _check()
{
	int x,y;
	for (x=1;x<=2*n;x++)
	{
		for (y=1;y<=2*n;y++)	if (xy[x][y]!='*') return 2;
		
    }
	printf("Congratulations!\n");
	
	return 3;
	
}


int init(int x1,int y1,int x2,int y2)
{
	int t=-1;
	if (xy[x1][y1]==xy[x2][y2] && (xy[x1][y1]!='*') && (xy[x2][y2]!='*')) 
	{
		xy[x1][y1]='*';xy[x2][y2]='*';
		t=_check();
		if (t!=3) {_out(); return t;	}
		return t;
	}
	else if ((xy[x1][y1]!=xy[x2][y2]) || (xy[x1][y1]=='*') || (xy[x2][y2]=='*'))
	{
		printf("Uh-oh\n");
		return 0;
	}
	
}






/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------编写区--------------*/ 

cin>>n;
for(i=1;i<=2*n;i++)
for (j=1;j<=2*n;j++) cin>>xy[i][j];

cin>>m;
for (i=1;i<=m;i++)
{
  
  cin>>a>>b>>c>>d;
  t=init(a,b,c,d);
  if(t==0) cntwa++;
  if (t==3) return 0;
  if (cntwa==3)
  {
  	printf("Game Over\n");
  	return 0;
  }
  


  
}





/*---------------The end-------------*/
	return 0;
} 


