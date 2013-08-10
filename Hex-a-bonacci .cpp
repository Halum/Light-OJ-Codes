#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<utility>
#include<functional>
#include<bitset>
#define MOD 10000007

using namespace std;

long long int hexa[10010];
long long int N,i,j;
long long int T, k, res;
bool mark[10010];

long long int findHexa( long long int N )
{
    if( mark[N] ) return hexa[N];
    else
    {
        long long int i;
        hexa[N] = 0;

        for( i = 1; i < 7; ++i )
        {
            hexa[N] += findHexa( N - i ) % MOD;
            hexa[N] %= MOD;
        }

        mark[N] = true;
        return hexa[N];
    }


}

int main()
{


    scanf("%lld", &T);

    for( k = 1; k <= T; ++k )
    {
       scanf("%lld%lld%lld%lld%lld%lld%lld",&hexa[0], &hexa[1], &hexa[2], &hexa[3], &hexa[4], &hexa[5], &N);

       memset( mark, 0, sizeof mark );

       for( i = 0; i < 6; ++i ){
            mark[i] = true;
            hexa[i] = hexa[i] % MOD;
       }

       res = findHexa( N );

       printf("Case %lld: %lld\n", k, res );



    }

    return 0;
}
