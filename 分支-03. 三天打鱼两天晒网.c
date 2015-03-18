#include <stdio.h>
int day=0;
int main()
{
	scanf("%d",&day);
	if (day%5<=3 && day%5!=0) {printf("Fishing in day %d\n",day);}
	if (day%5>3 || day%5==0) {printf("Drying in day %d\n",day);}
	return 0;
}
