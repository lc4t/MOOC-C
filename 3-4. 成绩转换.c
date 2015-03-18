#include <stdio.h>
int a;
int main()
{

	scanf("%d",&a);
	if (a>=90) {printf("A");}
	if (a>=80 && a<90) {printf("B");}
	if (a<80 && a>=70) {printf("C");}
	if (a<70 && a>=60) {printf("D");}
	if (a<60) {printf("E");}

	return 0;
}
