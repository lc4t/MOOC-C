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

string str[500000];
int i=1;

/*--------------Variable----------------*/


/*---------------Function---------------*/

int main() {
ios::sync_with_stdio(false);
//freopen("a.in","r",stdin);
//freopen("a.out","w",stdout);

/*---------------Writing----------------*/
string str[500000];
int i=1;
while (cin>>str[i])	i++;i--;
for (;i>=2;i--) cout<<str[i]<<" "; cout<<str[1];

/*--------------The End-----------------*/
return 0;
}
