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
#define SIZE 35
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
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int m, n;
    char str[100], s[100];
    deque<int> dq;

    T = atoi(gets(str));

    for(i=1; i<=T; ++i){
        gets(str);
        sscanf(str, "%d%d", &n,&m);
        printf("Case %d:\n",i);
        len = 0;
        dq.clear();

        for(j=1; j<=m; ++j){
            gets(str);
            sscanf(str, "%s",s);

            if(!strcmp(s,"pushLeft")){
                if(len==n) printf("The queue is full\n");
                else{

                    sscanf(str, "%s %d", s, &N);
                    dq.push_front(N);
                    len++;
                    printf("Pushed in left: %d\n",N);
                }
            }
            else if(!strcmp(s,"pushRight")){
                if(len==n) printf("The queue is full\n");
                else{
                    sscanf(str, "%s %d", s, &N);
                    dq.push_back(N);
                    len++;
                    printf("Pushed in right: %d\n",N);
                }
            }
            else if(!strcmp(s,"popLeft")){
                if(!len) printf("The queue is empty\n");
                else{
                    N = dq.front();
                    dq.pop_front();
                    len--;
                    printf("Popped from left: %d\n",N);
                }
            }
            else if(!strcmp(s,"popRight")){
                if(!len) printf("The queue is empty\n");
                else{
                    N = dq.back();
                    dq.pop_back();
                    len--;
                    printf("Popped from right: %d\n",N);
                }
            }

        }
    }


    return 0;
}

