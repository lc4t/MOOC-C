#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;



/*---------��ͷ�ļ������ָ���---------*/
int a[5];


/*---------����������ָ���-----------*/




int main(){ 
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);
/*---------------��д��--------------*/ 




cin>>a[1]>>a[2]>>a[3];
sort(a+1,a+4);
cout<<a[1]<<"->"<<a[2]<<"->"<<a[3]<<endl;






	
/*---------------The end-------------*/
	return 0;
} 


