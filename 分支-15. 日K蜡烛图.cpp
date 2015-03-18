#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------��ͷ�ļ������ָ���---------*/

int _open,_high,_low,_close;
double a,b,c,d;

/*---------����������ָ���-----------*/
void cc()
{
	
	if (_close<_open) printf("BW-Solid");
	if (_close>_open) printf("R-Hollow");
	if (_close==_open) printf("R-Cross");
	
	return;
}

/*----------�����ָ���----------------*/ 
int main(){
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------��д��--------------*/ 

cin>>a>>b>>c>>d;
_open=(int)(a*1.000000*1000);
_high=(int)(b*1.000000*1000);
_low=(int)(c*1.000000*1000);
_close=(int)(d*1.000000*1000);

if ((_low<_open && _low<_close ) || (_high>_open && _high>_close))
{
    cc();
	printf(" ");
	if ((_low<_open && _low<_close )&& (_high>_open && _high >_close)) printf("with Lower Shadow and Upper Shadow");
	if ((_low<_open && _low<_close) && !(_high>_open && _high >_close)) printf("with Lower Shadow");
	if (!(_low<_open && _low<_close )&& (_high>_open && _high >_close)) printf("with Upper Shadow");
}
else cc();




	
/*---------------The end-------------*/
	return 0;
} 


