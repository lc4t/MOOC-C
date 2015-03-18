/*#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime> 
#include <stack>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <memory>
#include <cstring>
#include <cstdlib> 
#include <cstring>
#include <utility>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;*/

#include <stdio.h>

/*--------------Header file--------------*/

char a[88][88],ch;
int i=1,t=1,j=1,bk=0;

/*--------------Variable----------------*/


/*---------------Function---------------*/

int main() {
//ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);

/*---------------Writing----------------*/


for (i=1;;i++)
{
    for (j=1;bk!=-1;j++)
    {
        bk=scanf("%c",&ch);
        if (bk!=-1 && ch!=' ' && ch!='\n') a[i][j]=ch;
        else break;
    }
    if (bk==-1) break;
   // if (ch=='\n') {bk=-1;break;}
}
i--;
for (;i>=2;i--)
{
    printf("%s ",a[i]+1);
}
printf("%s\n",a[i]+1);



/*--------------The End-----------------*/
return 0;
} 
