	#include <stdio.h>
	int speed;
	int main()
	{
		scanf("%d",&speed);
		if (speed>60){printf("Speed: %d - Speeding\n",speed);}
		if (speed<=60){printf("Speed: %d - OK\n",speed);}
		return 0;
	}
