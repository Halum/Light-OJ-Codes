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
#define pb push_back
#define ps push
#define pp pop
#define sz size
#define em empty
#define pr pair
#define CLR(v, n) for(int i=0; i<n; ++i)v[i].clear()
#define CLEAR(Q) while(Q.size()) Q.pop()
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 100010
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
vector<int> node[SIZE];
int visit[SIZE];
queue<int> indx;

int BFS(int s)
{
    //printf("Bfs : %d\n",s);
    queue<int> Q;
    int a = 1, b=0, u, v;
    visit[s] = 1;
    Q.push(s);

    while(!Q.em()){
        u = Q.front();
        Q.pp();
        for(int i=0; i<node[u].sz(); ++i){
            v = node[u][i];
            if(!visit[v]){
                if(visit[u]==1) visit[v] = 2, b++, Q.ps(v);
                else visit[v] = 1, a++, Q.ps(v);
            }
        }
    }
    //printf("%d %d\n",a,b);
    return max(a, b);
}
//---------------------------------------------------->
int main()    //
{
    register int i, j, k=1, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    scanf("%d", &T);

    for(i=1; i<=T; ++i){
        scanf("%d",&N);
        CLR(node, SIZE);
        //CLEAR(indx);

        for(j=1; j<=N; ++j){
            scanf("%d%d", &x, &y);
            indx.ps(x), indx.ps(y);
            node[x].pb(y);
            node[y].pb(x);
        }

        printf("Case %d: ", i);

        memset(visit, 0, sizeof visit);

        sum=0;
        while(indx.sz()){
            int in = indx.front();
            indx.pp();
            if(!visit[in]){
                sum += BFS(in);
            }
        }
        printf("%d\n",sum);
    }


    return 0;
}


