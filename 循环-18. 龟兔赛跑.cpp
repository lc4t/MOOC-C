#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
#define turtle minute*3
/*---------��ͷ�ļ������ָ���---------*/

int minute=0,rabbit=0;
int T=0,waiting=0;
/*---------����������ָ���-----------*/


/*----------�����ָ���----------------*/ 
int main() {
ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 


scanf("%d",&T);

for (minute=1;minute<=T;minute++)
{
	
	waiting++;waiting%=40;
	if (waiting>10 || waiting==0) {continue;}
	if (waiting==10)
	{
		rabbit+=9;
		if (rabbit<=turtle) {waiting=0;continue;}
    }
    if (waiting<10) rabbit+=9;
	

	
}

minute--;



if (rabbit>turtle) printf("^_^ %d",rabbit);
if (rabbit<turtle) printf("@_@ %d",turtle);
if (rabbit==turtle) printf("-_- %d",turtle);


/*---------------The end-------------*/
	return 0;
}


