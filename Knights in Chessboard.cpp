/*
ID: my.lost1
PROG: test
LANG: C++
*/
#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<utility>
#include<functional>
#include<bitset>
#include<deque>
#include<set>
#include<algorithm>
#include<ctime>
#include<string>
#include<list>
#include<vector>
#include<stack>
#include<queue>
#include<map>  // END OF LIBRARY
#define sdum scanf("%c",&dummy)
#define pn printf("\n")
#define sn scanf("\n")
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 215000
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->
int Knight(int m, int n)
{
    register int MAX, MIN, res = m*n;

    if( m==1 || n==1 ) return max(m, n);
    if( res==4 || res==6 ) return 4;

    MIN = min(m, n);
    MAX = max(m, n);
    if(MIN==2)
    {
        int mod = res % 8;
        res /=  8;
        res *=  4;
        if(mod>2) return res+4;
        return res+mod;
    }
    if(res%2)
        return  (res+1)/2;
    return res/2;
}
//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> N;

    for( i = 1; i <= N; ++i ){
        cin >> x >> y;

        sum = Knight( x, y );

        printf("Case %d: %d\n", i, sum );
    }





    return 0;
}

