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
char city[25][25];
int visit[25][25];
pair<int, int> a,b,c, h;

void BFS(pair<int,int> hom)
{
    int i, j, xx,yy;
    pair<int, int> u, v;
    queue< pair<int, int> > Q;

    Q.push(hom);
    visit[hom.first][hom.second] = 1;

    while(!Q.em()){
        u = Q.fr();
        Q.pp();

        xx = u.first;
        yy = u.second;

        if(yy+1 < y and !visit[xx][yy+1] and (city[xx][yy+1]=='a' || city[xx][yy+1]=='b' ||city[xx][yy+1]=='c' ||city[xx][yy+1]=='.')){
            visit[xx][yy+1] = visit[xx][yy] + 1;
            Q.ps(make_pair(xx, yy+1));
        }
        if(yy-1 >= 0 and !visit[xx][yy-1] and (city[xx][yy-1]=='a' || city[xx][yy-1]=='b' ||city[xx][yy-1]=='c' ||city[xx][yy-1]=='.')){
            visit[xx][yy-1] = visit[xx][yy] + 1;
            Q.ps(make_pair(xx, yy-1));
        }
        if(xx+1 < x and !visit[xx+1][yy] and (city[xx+1][yy]=='a' || city[xx+1][yy]=='b' ||city[xx+1][yy]=='c' ||city[xx+1][yy]=='.')){
            visit[xx+1][yy] = visit[xx][yy] + 1;
            Q.ps(make_pair(xx+1, yy));
        }
        if(xx-1 >= 0 and !visit[xx-1][yy] and (city[xx-1][yy]=='a' || city[xx-1][yy]=='b' ||city[xx-1][yy]=='c' ||city[xx-1][yy]=='.')){
            visit[xx-1][yy] = visit[xx][yy] + 1;
            Q.ps(make_pair(xx-1, yy));
        }
    }

}

//---------------------------------------------------->
int main()    //1238
{
    register int i, j, k=1, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->

    T = atoi(gets(city[0]));

    for(i=1; i<=T; ++i){
        cin >> x;
        y = atoi(gets(city[0]));

        //cout << "x " << x << endl;

        for(j=0; j<x; ++j) gets(city[j]);

        for(j=0; j<x; ++j){
            for(k=0; city[j][k]; ++k){
                visit[j][k] = 0;
                if(city[j][k] == 'a') a.first = j, a.second = k;
                else if(city[j][k] == 'b') b.first = j, b.second = k;
                else if(city[j][k] == 'c') c.first = j, c.second = k;
                else if(city[j][k] == 'h') h.first = j, h.second = k;
            }
        }

       // cout << h.first << ' ' << h.second;

        BFS(h);

        printf("Case %d: ", i);

        cout << max(visit[a.first][a.second], max(visit[b.first][b.second], visit[c.first][c.second]))-1 << endl;

    }





    return 0;
}
