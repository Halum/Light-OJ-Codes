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
#define pf printf
#define sf scanf
#define pn printf("\n")
#define sn scanf("\n")
#define pb push_back
#define ps push
#define pp pop
#define fr front
#define em empty
#define pr pair
#define sz size
#define CLR(v, n) for(int i=0; i<n; ++i)v[i].clear()
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 35
#define INF 99999999
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

//---------------------------------------------------->
int main()    //1166
{
    register int i, j, k=1, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;
    int a[110];

    for(i=1; i<=T; ++i){
        cin >> N;

        for(j=1; j<=N; ++j) cin >> a[j];

        sum = 0;
        for(j=1; j<=N; ++j){
            for(k=j+1; k<=N; ++k){
                if(a[k] == j){
                    sum++;
                    swap(a[j], a[k]);
                }
            }
        }

        printf("Case %d: %d\n",i, sum);

    }


    return 0;
}
