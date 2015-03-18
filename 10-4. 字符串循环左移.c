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


char a[102];
int p;
int i,j,k,l,m,n;
char c='a';
/*--------------Variable----------------*/




/*---------------Function---------------*/
int main() {
//ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------Writing----------------*/


for(i=1;;i++)
{
    c=getchar();
    if (c!='\n')    a[i]=c;
    else break;
}
scanf("%d",&p);
p%=(i-1);
for (j=p+1;j<=i-1;j++) cout<<a[j];
for (j=1;j<=p;j++) cout<<a[j];

/*--------------The End-----------------*/
return 0;
} 
