#include <stdio.h>
#include <math.h>
/*---------↑头文件声明分割线---------*/

double a,b,c,d,e,f;

/*---------↑定义变量分割线-----------*/



/*----------函数分割线----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------编写区--------------*/ 


scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

e=a+c;f=b+d;

if (e>-0.05 && e<0.04) e=0;
if (f>-0.05 && f<0.04) f=0;
printf("(%.1f, %.1f)\n",e,f);



/*---------------The end-------------*/
	return 0;
}


