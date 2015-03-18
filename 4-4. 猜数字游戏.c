#include <stdio.h>
int num,time,in,count;
int main()
{
	scanf("%d %d",&num,&time);
	count=0;
	while (scanf("%d",&in))
	{
	    count++;
	    if (count>time)  {printf("Game Over\n");return 0;}
	    if (count==1 && in==num) {printf("Bingo!\n"); return 0;}
	    if (count<=3 && in==num) {printf("Lucky You!\n"); return 0;}
	    if (count>3 && in==num)  {printf("Good Guess!\n"); return 0;}
	    if (in<0)                {printf("Game Over\n");return 0;}
	    if (in>num) printf("Too big\n");
	    if (in<num) printf("Too small\n");

	}
	
	return 0;
}
