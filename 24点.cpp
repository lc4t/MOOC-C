#include<iostream> 
using namespace std; 
void putout (int num [],int f[]) 
{ 
int i; 
char fh[5]={'o','+','-','*','/'}; 
i=0; 
cout<<num[i]; 
for (;i<=3;i++) 
cout<<f[i]<<num[i]; 
} 
main () 
{ 

freopen("a.in","r",stdin);
freopen("a.out","w",stdout);

int num[4],f[4],s,i,k; 
char fh[5]={'o','+','-','*','/'}; 
k=0; 
cin>>num[0]>>num[1]>>num[2]>>num[3]; 

for (f[1]=1;f[1]<5;f[1]++) 
{ 

    for (f[2]=1;f[2]<5;f[2]++) 
    for (f[3]=1;f[3]<5;f[3]++) 
    { 
        s=num[0]; 
        for (i=1;i<4;i++) 
        if (f[i]==1) s+=num[i]; 
        else if (f[i]==2)  s-=num[i]; 
        else if (f[i]==3)  s*=num[i]; 
        else s/=num[i]; 
        if (s==24) 
          {  cout<<"(("<<num[0]<<fh[f[1]]<<num[1]<<')'; 
             cout<<fh[f[2]]<<num[2]<<')'; 
             cout<<fh[f[3]]<<num[3]<<endl; 
             k++; 
          } 
     } 
} 

if (k==0) 
cout<<"无解"; 
//cin>>f[2]; 
}