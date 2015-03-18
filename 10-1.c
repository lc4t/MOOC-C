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
char s[88];
int len;
char c;
int i,t=0;
/*--------------Variable----------------*/



/*---------------Function---------------*/
int main() {
//ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------Writing----------------*/
for (i=1;;i++)
{
    s[i]=getchar();
    if (s[i]=='\n') {len=i-1;break;}
}
c=getchar();

for (i=1;i<=len;i++)
{
    if(s[i]==c) {t=i;break;}
    
}

if (t==0) printf("Not found\n");
else
for (i=t;i<=len;i++) printf("%c",s[i]);

    
/*--------------The End-----------------*/
return 0;
} 
