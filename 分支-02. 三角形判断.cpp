#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

double a, b, c, l, s;
double dian1[2], dian2[2], dian3[2];
 
 int main()
 
 {
 cin>>dian1[0];
 cin>>dian1[1];
 cin>>dian2[0];
 cin>>dian2[1];
 cin>>dian3[0];
 cin>>dian3[1];
 a = (double)sqrt((dian1[0] - dian2[0]) * (dian1[0] - dian2[0]) + (dian1[1] - dian2[1]) * (dian1[1] - dian2[1]));
 b = (double)sqrt((dian1[0] - dian3[0]) * (dian1[0] - dian3[0]) + (dian1[1] - dian3[1]) * (dian1[1] - dian3[1]));
 c = (double)sqrt((dian2[0] - dian3[0]) * (dian2[0] - dian3[0]) + (dian2[1] - dian3[1]) * (dian2[1] - dian3[1]));
 /* ------------------------------·Ö¸îÏß----------------------------------*/
 
 if (fabs(a+b-c)>1e-8 && fabs(a+c-b)>1e-8 && fabs(b+c-a)>1e-8 )
 
 {
 l = a + b + c;
 s = (double)sqrt(l / 2 * (l / 2 - a) * (l / 2 - b) * (l / 2 - c));
 printf("L = %.2f, A = %.2f",l,s);
 }
 
 else 
 printf("Impossible\n") ;


 return 0;
}
