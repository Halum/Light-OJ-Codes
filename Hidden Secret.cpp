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
#define eps 1e-12
#define SIZE 1000;
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int T, len, N, sum, x, y, cary, ans, temp, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    // 1338
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char name1[200], name2[200];

    cin >> T;

    sn;

    while( gets( name1 ) != NULL )
    {

        for( i = k = 0; name1[i]; ++i )
            if( name1[i] != ' ' )
                name1[k++] = tolower( name1[i] );

        name1[k] = 0;

        gets( name2 );

        for( i = j = 0; name2[i]; ++i )
            if( name2[i] != ' ' )
                name2[j++] = tolower( name2[i] );

        name2[j] = 0;

        printf("Case %d: ", ++l);

        if( k == j )
        {
            sort( name1, name1 + k );
            sort( name2, name2 + j );

            if( !strcmp( name1, name2 ) )
                printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");


    }




    return 0;
}
