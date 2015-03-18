#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib> 
#include <ctime> 
using namespace std;
/*---------↑头文件声明分割线---------*/

string _num;

/*---------↑定义变量分割线-----------*/

int _two2ten(string s)
{
	int i=0;
	int t=1;
	int _out=0;
	for (i=7;i>=0;i--)
	{
		_out+=t*(s[i]-'0');
		t*=2;
	}
	return _out;
}

/*----------函数分割线----------------*/ 
int main() {
ios::sync_with_stdio(false);
freopen("a.in","r",stdin);
freopen("a.out","w",stdout);





/*---------------编写区--------------*/ 


cin>>_num;
cout<<_two2ten(_num.substr(0, 8))<<"."<<_two2ten(_num.substr(8, 8))<<"."<<_two2ten(_num.substr(16, 8))<<"."<<_two2ten(_num.substr(24, 8))<<endl;


/*---------------The end-------------*/
	return 0;
} 


