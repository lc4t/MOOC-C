#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime> 
#include <stack>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <memory>
#include <cstring>
#include <cstdlib> 
#include <cstring>
#include <utility>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*--------------Header file--------------*/


/*--------------Variable----------------*/

bool is0(double x)
{
	if (x>0.0499999 || x<-0.499999) return false;
	return true;
}
class complex   // 复数类 
{
	public:
		double x,y;
		complex () {}                        //默认构造函数 
		complex(double i,double j){x=i;y=j;}// 构造函数读入浮点坐标 
		complex operator + (complex &f)	{return complex(x+f.x,y+f.y);}
		complex operator - (complex &f)	{return complex(x-f.x,y-f.y);}
		complex operator * (complex &f)	{return complex(x*f.x-y*f.y,x*f.y+y*f.x);}
		complex operator / (complex &f)	{return complex((x*f.x+y*f.y)/(f.x*f.x+f.y*f.y),(y*f.x-x*f.y)/(f.x*f.x+f.y*f.y));}
		void print2()
		{
			if ((x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) && y>=0) printf ("%.1f+%.1fi\n",x,y);
			if ((x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) && y<0) printf ("%.1f%.1fi\n",x,y);
			if (!(x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) ) printf ("%.1fi\n",y);
			if ((x>=0.05 || x<=-0.05) && !(y>=0.05 || y<=-0.05)) printf ("%.1f\n",x);
			if (!(x>=0.05 || x<=-0.05) && !(y>=0.05 || y<=-0.05)) printf ("0.0\n");
		
		//	if (!is0(x) && !is0(y) && y>=0) printf ("%.1f+%.1fi\n",x,y);
		//	if (!is0(x) && !is0(y) && y<0) printf ("%.1f%.1fi\n",x,y);
		//	if (is0(x) && !is0(y) ) printf ("%.1fi\n",y);
		//	if (!is0(x) && is0(y) ) printf ("%.1f\n",x);
		//	if (is0(x) && is0(y)) printf ("0.0\n");

		}
		void print1()
		{
		//	if ((x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) ) printf ("(%.1f+%.1fi)",x,y);
		//	if (!(x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) ) printf ("(0.0+%.1fi)",y);
			if ((x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) && y>=0) printf ("(%.1f+%.1fi)",x,y);
			if ((x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) && y<0) printf ("(%.1f%.1fi)",x,y);
			if (!(x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) &&y>=0) printf ("(0.0+%.1fi)",y);
			if (!(x>=0.05 || x<=-0.05) && (y>=0.05 || y<=-0.05) && y<0) printf ("(0.0%.1fi)",y);
			if ((x>=0.05 || x<=-0.05) && !(y>=0.05 || y<=-0.05)) printf ("(%.1f+0.0i)",x);
			if (!(x>=0.05 || x<=-0.05) && !(y>=0.05 || y<=-0.05)) printf ("(0.0+0.0i)");
		}
		
};
 




/*---------------Function------------*/


int main() {
ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);
/*---------------Writing-------------*/
double a,b,c,d;
//cin>>a;cout<<is0(a);

cin>>a>>b>>c>>d;
complex f1(a,b),f2(c,d);

f1.print1();printf(" + ");f2.print1();printf(" = ");(f1+f2).print2();
f1.print1();printf(" - ");f2.print1();printf(" = ");(f1-f2).print2();
f1.print1();printf(" * ");f2.print1();printf(" = ");(f1*f2).print2();
f1.print1();printf(" / ");f2.print1();printf(" = ");(f1/f2).print2();


/*--------------The End-------------*/
return 0;
} 
