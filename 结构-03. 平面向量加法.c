#include <stdio.h>
#include <math.h>
/*---------��ͷ�ļ������ָ���---------*/

double a,b,c,d,e,f;

/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 


scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

e=a+c;f=b+d;

if (e>-0.05 && e<0.04) e=0;
if (f>-0.05 && f<0.04) f=0;
printf("(%.1f, %.1f)\n",e,f);



/*---------------The end-------------*/
	return 0;
}


