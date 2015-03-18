/*#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;*/
#include <stdio.h>
/*---------↑头文件声明分割线---------*/

int l1,l2;
char a[88],b[88];
int t[88]={0};
int i,j,k,n,m;


/*---------↑定义变量分割线-----------*/
int _instring(char s[])
{
    int i,len;
    for (i=1;;i++){
                    s[i]=getchar();
                    if (s[i]=='\n' || s[i]+1==0) {len=i-1;break;}
                   }
    return len;
}
void _run()
{
    
    for (i=1;i<=l1-l2+1;i++)
{
    if (a[i]==b[1])
    {
        k=i;   // k是起点 
        for (j=1;j<=l2;j++)
        {
            for (;;)
            {
                if (t[k]==1) k++;
                else break;
            }
            if (a[k]!=b[j]) break; 
            if (a[k]==b[j]) k++;
        }
        if (a[k-1]==b[j-1] && j-1==l2) 
        {
            for (m=i;m<=k-1;m++) t[m]=1;
        }
    }
}
}



/*----------函数分割线----------------*/ 
int main() {
//ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 
l1=_instring(a);
l2=_instring(b);

_run();
_run();
_run();
_run();
_run();
_run();
// 我就不信你能插6次！   
    
    


for (i=1;i<=l1;i++) {
    if (t[i]==0) printf("%c",a[i]);
}
    
/*---------------The end-------------*/
    return 0;
} 


