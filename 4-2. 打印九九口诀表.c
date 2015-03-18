/*#include <stdio.h>

int end=0;
int i,j;
int main()
{
	scanf("%d",&end);
	for (i=1;i<=end;i++)
	{
	     for (j=1;j<=i;j++) printf("%d*%d=%-4d",j,i,j*i);
		 printf("\n");

	 }
	return 0;
}




*/

#include <stdio.h>

int main()
{
	int N=0,i=1,j=1;
	//scanf("%d",&N);
	N=4;
	for (i=1;i<=N;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%-4d",j,i,j*i);
		}
		printf("\n");
	}




	return 0;
}


