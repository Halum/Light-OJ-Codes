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
#define pr make_pair
#define sz size
#define fs first
#define sc second
#define CLR(v, n) for(int i=0; i<n; ++i)v[i].clear()
#define PI (2.0 * acos(0.0))
#define eps 1e-12
#define SIZE 550
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
char mat[SIZE][SIZE];
int visit[SIZE][SIZE];

void DFS(int r, int c)
{
    //cout << r << ' ' << c << endl;
    if(mat[r][c] == 'C') sum++;

    visit[r][c] = 1;

    if(c+1 < y and !visit[r][c+1] and (mat[r][c+1] == '.' || mat[r][c+1] == 'C')) visit[r][c+1] = 1, DFS(r, c+1);

    if(c-1 >= 0 and !visit[r][c-1] and (mat[r][c-1] == '.' || mat[r][c-1] == 'C')) visit[r][c-1] = 1, DFS(r, c-1);

    if(r+1 < x and !visit[r+1][c] and (mat[r+1][c] == '.' || mat[r+1][c] == 'C')) visit[r+1][c] = 1, DFS(r+1, c);

    if(r-1 >= 0 and !visit[r-1][c] and (mat[r-1][c] == '.' || mat[r-1][c] == 'C')) visit[r-1][c] = 1, DFS(r-1, c);


    visit[r][c] = sum;
}

//---------------------------------------------------->
int main()    //1337
{
    register int i, j, k=1, l=0;
    freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    cin >> T;
    int q;

    for(i=1; i<=T; ++i){
        cin >> x >> y;

        q = atoi(gets(mat[0]));



        for(j=0; j<x; ++j) gets(mat[j]);

        printf("Case %d:\n",i);
        memset(visit, 0, sizeof visit);
        sum = 0;

        for(j=0; j<q; ++j){
            int a, b;
            cin >> a >> b;

            if(!visit[a-1][b-1]){
                sum = 0;
                DFS(a-1, b-1);
            }
            cout << visit[a-1][b-1] << endl;
        }

        for(j=0; j<x; ++j)
        {
            for(k=0; k<y; ++k) cout << visit[j][k] << ' ';
            cout << endl;
        }

    }


    return 0;
}
