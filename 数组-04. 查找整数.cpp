#include <stdio.h>

/*---------��ͷ�ļ������ָ���---------*/
long n,x;
long t;
long i=0;
long j,k;
/*---------����������ָ���-----------*/



/*----------�����ָ���----------------*/ 
int main() {

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);



/*---------------��д��--------------*/ 

scanf("%ld %ld",&n,&x);
for (i=0;i<n;i++){
                  scanf("%ld",&t);

	              if (t==x) {printf("%ld\n",i);return 0;} 

}
	printf("Not Found\n");


/*---------------The end-------------*/
	return 0;
} 


