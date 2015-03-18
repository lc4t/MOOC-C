#include <set>
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
using namespace std;
/*--------------Header file--------------*/
int m,n;
/*--------------Variable----------------*/
int calc(int num)
{

	int s=num;
	if (num==0 || num==-1) return -1;
    int t[5];
    int big,small;
    t[1]=num/1000;num-=t[1]*1000;
	t[2]=num/100;num-=t[2]*100;
    t[3]=num/10;num-=t[3]*10;
	t[4]=num;
	sort(t+1,t+5);
	big=t[4]*1000+t[3]*100+t[2]*10+t[1];
	small=t[1]*1000+t[2]*100+t[3]*10+t[4];
    if (big-small==0 && s==0) return -1;
    else if (big-small==s) return -1;
    else
    {
    	printf("%04d - %04d = %04d\n",big,small,big-small);
    	return (big-small);
    }     
}


/*---------------Function---------------*/
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------Writing----------------*/
cin>>n;
if (n==6174) printf("7641 - 1467 = 6174\n");
for (;;)
{
	m=calc(n);
	if (m==-1) break;
	else n=m;
} 
/*--------------The End-----------------*/
return 0;
} 
