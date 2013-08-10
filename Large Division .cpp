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
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",∫)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define Z 500000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T,  len, N, sum, x, y, pen, cary;
char ch, dummy;
bool check;
////
bool Devide(char Number[], long long int Divisor)
{
    if(!Divisor) return false;
    else
    {
        long long int len=strlen(Number), cary=0, num;
        register int i;
        for(i=0; i<len; )
        {
            cary *= 10;
            num = Number[i++]-48 + cary;
            while(num<Divisor && i<len)
                if(num<Divisor && i<len) num = num*10 + Number[i++]-48;

            cary = num%Divisor;
        }
        if(!cary) return true;
        else return false;
    }
}
//------------------------------>
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
	cin>>T;
	LL X;
	char str[500];
	for(i=1; i<=T; i++)
	{
		cin>>str;
		cin>>X;

		printf("Case %d: ",i);

		x = abs(x);

		if(str[0]=='-')
		{
			if(Devide(&str[1], X))  cout<<"divisible\n";
			else cout<<"not divisible\n";
		}
		else
		{
			if(Devide(str, X))  cout<<"divisible\n";
			else cout<<"not divisible\n";
		}
	}


    return 0;
}
