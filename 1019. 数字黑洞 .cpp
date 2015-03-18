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
int n;

/*--------------Variable----------------*/

int calc(int num)
{
	if (num==0 || num==-1) return -1;
	int t[5];
	t[1]=num/1000;num-=t[1]*1000;
	t[2]=num/100;num-=t[1]*100;
    t[3]=num/10;num-=t[1]*10;
	
	t[4]=num;
    sort(num[1],num[5]);
    int big=num[4]*1000+num[3]*100+num[2]*10+num[1];
    int small=num[1]*1000+num[2]*100+num[3]*10+num[4];
   
    if (big-small==0 && num==0) return -1;
    else
    {
    	printf("%d - %d = %d\n",big,small,big-small);
    	return calc(big-small);
    }     
}


/*---------------Function---------------*/


int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------Writing----------------*/

cin>>n;
if (calc(n)==-1) 




/*--------------The End-----------------*/
return 0;
} 
