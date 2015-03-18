#include <stdio.h>
int main(void)
{
	char grade=0xff;
	scanf("%c",&grade);
	switch(grade)
		{
			case 'A':printf("100"); break;
			case 'B':printf("89"); break;
			case 'C':printf("79"); break;
			case 'D':printf("69"); break;
			case 'E':printf("59"); break;
		}
	printf("\n");
	//scanf("%d",&grade);
	/*if (grade >= 90)
		{
			printf("A");
		}
	else if (grade < 90 && grade >= 80)
		{
			printf("B");
		}
	else if (grade < 80 && grade >= 70)
		{
			printf("C");
		}
	else if (grade < 70 && grade >= 60)
		{
			printf("D");
		}
	else (grade < 60)
		{
			printf("E");
		}*/
	return 0;
}

