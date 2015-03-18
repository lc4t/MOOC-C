#include <stdio.h>

/*---------↑头文件声明分割线---------*/
long n,x;
long t;
long i=0;
long j,k;
/*---------↑定义变量分割线-----------*/



/*----------函数分割线----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------编写区--------------*/ 

scanf("%ld %ld",&n,&x);
for (i=0;i<n;i++){
                  scanf("%ld",&t);

	              if (t==x) {printf("%ld\n",i);return 0;} 

}
	printf("Not Found\n");


/*---------------The end-------------*/
	return 0;
} 


