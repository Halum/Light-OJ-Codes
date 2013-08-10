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
int Bin_Dec( char *binary )
{
    int dec = 0, i = 0;
    int len = strlen( binary );
    dec += binary[i] - 48;
    for( ; i < len-1; ++i )
    {
        dec *= 2;
        dec += binary[i+1] - 48;

    }

    return dec;
}
//---------------------------------------------------->
int main()    // 1354
{
    register int i, j=1, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("Prize Bond Number.txt","a",stdout);
//---------------------------------------------------->
    char bin[100], *ptr;
    int ip[4], ip2[4];

    cin >> T;

    for( j = 1; j <= T; ++j )
    {
        scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);
        sn;

        gets( bin );

        ptr = strtok( bin, "." );
        ip2[0] = Bin_Dec( ptr );

        ptr = strtok( NULL, "." );
        ip2[1] = Bin_Dec( ptr );

        ptr = strtok( NULL, "." );
        ip2[2] = Bin_Dec( ptr );

        ptr = strtok( NULL, "." );
        ip2[3] = Bin_Dec( ptr );

        for( i = 0; i < 4; ++i )
            if( ip[i] != ip2[i] )
                break;

        printf("Case %d: ", j );

        if( i == 4 )
            printf("Yes\n");
        else
            printf("No\n");


    }





    return 0;
}
