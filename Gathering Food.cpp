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
#define mp make_pair
#define sz size
#define fs first
#define sc second
#define ms(a, v) memset(a, v, sizeof a)
#define CLEAR(q) while(q.size()) q.pop()
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
char mat[15][15];
int visit[15][15];
int last;

void Job(int i, int j, int x)
{
    mat[i][j] = '.';
    memset(visit, 0, sizeof visit);
    last++;
    visit[i][j] = x + 1;
    len = x+1;
}

void BFS(int x, int y)
{
    queue< pair<int, int> > Q;
    pair<int, int>u;
    int i, j;

    Q.ps(mp(x, y));

    visit[x][y] = 1;
    mat[x][y] = '.';

    while(!Q.em())
    {
        u = Q.fr();
        Q.pp();

        i = u.fs;
        j = u.sc;

        x = visit[i][j];

        if(j+1 < N and !visit[i][j+1] and mat[i][j+1] != '#'){
            if( mat[i][j+1] != '.'){
                if(mat[i][j+1] == last+1){
                    Job(i, j+1, x);
                    CLEAR(Q);
                    Q.ps(mp(i,j+1));
                    continue;
                }
            }
            else{
                visit[i][j+1] = x + 1;
                Q.ps(mp(i,j+1));
            }
        }

        if(j-1 >= 0 and !visit[i][j-1] and mat[i][j-1] != '#'){
            if( mat[i][j-1] != '.'){
                if(mat[i][j-1] == last+1){
                    Job(i, j-1,x);
                    CLEAR(Q);
                    Q.ps(mp(i,j-1));
                    continue;
                }
            }
            else{
                visit[i][j-1] = x + 1;
                Q.ps(mp(i,j-1));
            }
        }

        if(i+1 < N and !visit[i+1][j] and mat[i+1][j] != '#'){
            if( mat[i+1][j] != '.'){
                if(mat[i+1][j] == last+1)
                {
                    Job(i+1, j,x);
                    CLEAR(Q);
                    Q.ps(mp(i+1,j));
                    continue;
                }
            }
            else{
                visit[i+1][j] = x + 1;
                Q.ps(mp(i+1,j));
            }
        }

        if(i-1 >= 0 and !visit[i-1][j] and mat[i-1][j] != '#'){
            if( mat[i-1][j] != '.'){
                if(mat[i-1][j] == last+1){
                    Job(i-1, j, x);
                    CLEAR(Q);
                    Q.ps(mp(i-1,j));
                    continue;
                }
            }
            else{
                visit[i-1][j] = x + 1;
                Q.ps(mp(i-1,j));
            }
        }
    }
}
//---------------------------------------------------->
int main()    //1066
{
    register int i, j, k=1, l=0;
    freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    T = atoi(gets(mat[0]));

    for(k=1; k<=T; ++k){
        gets(mat[0]);
        N = atoi(gets(mat[0]));

        for(i=0; i<N; ++i) gets(mat[i]);

        memset(visit, 0, sizeof visit);

        for(i=0; i<N; ++i){
            for(j=0; j<N; ++j){
                if(mat[i][j] == 'A'){
                    last = 'A';
                    len = 1;
                    BFS(i, j);
                    break;
                }
            }
        }

        for(i=0; i<N; ++i){
            for(j=0; j<N; ++j){
                if(isalpha(mat[i][j])) break;
            }
            if(isalpha(mat[i][j])) break;
        }

        printf("Case %d: ", k);
        if(isalpha(mat[i][j])) cout << "Impossible\n";
        else if(last == 'A') cout << "0\n";
        else cout << len-1 << endl;
    }

    return 0;
}
