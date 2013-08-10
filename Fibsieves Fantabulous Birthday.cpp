#include<stdio.h>
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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define Z 100
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
//int T,  len, N, sum, x, y,pen, cary;
char ch, dummy;
bool check;
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    LL N, x, y, step, L, D, M, I, T;
    cin >> T;

    for( i = 1; i <= T; ++i )
    {
        cin >> N;

        printf("Case %d: ", i);
        step = sqrt(N);
        if(step*step!=N) step++;

        if(step%2)
        {
            L = step*step;
            D = (step-1)*(step-1)+1;
            M = L-(L-D)/2;
            y = x = step;
            if(N<=L && N>=M) x=L-N+1;
            else y=y-M+N;

            printf("%lld %lld\n",x,y);
        }
        else
        {
            L = (step-1)*(step-1)+1;
            D = step*step;
            M = D - (D-L)/2;
            x = y = step;
            if(N<=D && N>=M) y=D-N+1;
            else x=x-M+N;

            printf("%lld %lld\n",x,y);
        }

    }



    return 0;
}
