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
template <class T> void clear( T *p)
{
    while((*p).size()) (*p).pop();
}
//---------------------------------------------------->
int main()    //
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    char str[100], ptr[100];
    stack<string>bk;
    stack<string>fw;
    string cur, tmp;

    T = atoi(gets(str));

    for(i=1; i<=T; ++i){
        printf("Case %d:\n",i);
        cur = "http://www.lightoj.com/";

        clear(&bk);
        clear(&fw);

        while(cin >> tmp and tmp[0] != 'Q'){

            if( tmp[0] == 'V' ){
                bk.push(cur);
                cin >> cur;
                cout << cur << endl;
                clear(&fw);
            }
            else if( tmp[0] == 'B' ){
                if(!bk.size()) cout << "Ignored\n";
                else{
                    fw.push(cur);
                    cur = bk.top();
                    bk.pop();
                    cout << cur << endl;
                }
            }
            else if( tmp[0] == 'F' ){
                if(!fw.size()) cout << "Ignored\n";
                else{
                    bk.push(cur);
                    cur = fw.top();
                    fw.pop();
                    cout << cur << endl;
                }
            }
        }
    }


    return 0;
}

