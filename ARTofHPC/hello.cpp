//Created by Diac
#include <iostream>
#include <assert.h>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <ctime>
#include <vector>
#include <queue>
#include <map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N = 1e6 + 1024;
int read()
{
    int x = 0, w = 0; char ch = 0;
    while(!isdigit(ch)) w |= ch == '-', ch = getchar();
    while(isdigit(ch)) x = (x<<3) + (x<<1) + (ch^48), ch = getchar();
    return w ? -x : x;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    #endif
    
    return 0;
}