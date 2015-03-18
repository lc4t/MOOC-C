#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

string s[101];
int i,j,n,k;
string vim;

/*---------↑定义变量分割线-----------*/


void bubblesort(int t)
{

	int i,j;
	for (i=1;i<=n;i++)
	{
		if (t==0) return;
	    for (j=1;j<=n-1;j++)
	    {
		
		    if (s[j+1]<s[j]) 
		{
			vim=s[j];
			s[j]=s[j+1];
			s[j+1]=vim;
			
		}
	}
	t--;
	
    }
}
/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);





/*---------------编写区--------------*/ 

cin>>n>>k;
for (i=1;i<=n;i++) cin>>s[i];
bubblesort(k);
for (i=1;i<=n;i++)
cout<<s[i]<<endl;



/*---------------The end-------------*/
	return 0;
} 


