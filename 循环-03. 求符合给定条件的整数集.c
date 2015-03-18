#include <stdio.h>
 
 int a,b,c,d,i,j,k,cont;
 count=0;
 int main()
 {
 
 	
 	
 	
 	
 	
 	scanf("%d",&a);
 	b=a+1;c=a+2;d=a+3;   //a b c d
    for(i=a;i<=d;i++)    //  first
    {      
        for (j=a;j<=d;j++)   //second
        {  
		    if (i==j) continue;
		    
		    for (k=a;k<=d;k++)
		    {
		    	if (k==i || k==j) continue;
		    	else
		    	    {
		    	    count++;
					if (count%6!=0) printf("%d%d%d ",i,j,k);
					   else  printf("%d%d%d",i,j,k);
					}
		    	
		    }
		    
		    
        }printf("\n");
     }
    

 	return 0;
 }
