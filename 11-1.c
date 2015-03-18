#include <stdio.h>


/*--------------Header file--------------*/


    char num[18][18];
	char name[18][88];
	char birth[18][88];
	char sex[18][18];
    char phone1[18][88];
    char phone2[18][88];


int n,k,t,i;


/*--------------Variable----------------*/




/*---------------Function---------------*/

int main() {
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);

/*---------------Writing----------------*/

scanf("%d",&n);
for (i=0;i<n;i++){	scanf("%s %s %s %s %s",&(name[i]),&(birth[i]),&(sex[i]),&(phone1[i]),&(phone2[i]));}

scanf("%d",&k);
for (i=0;i<k;i++)
{
	scanf("%d",&t);
    if (t>=n || t<0) printf("Not Found\n");
    else         printf("%s %s %s %s %s\n",name[t],phone1[t],phone2[t],sex[t],birth[t]);
}





/*--------------The End-----------------*/
return 0;
} 
