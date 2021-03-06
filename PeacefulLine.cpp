#line 2 "PeacefulLine.cpp"
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <utility>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <iomanip>
#include <deque>
#include <bitset>
#include <cstdlib>
#include <iostream>
#include <cstdio>

using namespace std;
typedef long long                 ll;
typedef long double             ld;
typedef vector<int>             vi;
typedef vector <long long > vll;
typedef pair<ll ,ll >             pll;
typedef pair <int , int >       pii;

#define mp                         make_pair
#define pb   	                    push_back
#define all(a)	                    a.begin() , a.end()
#define ff	                    first
#define ss	                    second
#define m0(x)	                    memset(x , 0 , sizeof(x))
#define debug(x)                 {cerr <<#x<<" = " <<x<<"\n"; }
#define debug2(x,y)             {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define snuke(c , it)             for(__typeof((c).begin()) it=(c).begin(); it!=(c).end();it++)
const int mod = 1e9+7;

inline ll gcd ( ll a , ll b) { ll t; while(b) { a=a%b;t=a;a=b;b=t;}return a;}
inline ll lcm ( ll a,  ll b) { return a/gcd(a,b)*b;}

class PeacefulLine {
    public:
        string makeLine(vector <int> x) {



            int n = x.size();
            set< int > dist;

            snuke(x, i )
            {
                dist.insert(*i);
            }
            int m = dist.size();
            int cnt[26] = {0};
            snuke(x, i )
            {
                cnt[*i]++;
            }
            int  ok = 1;
            for(int i = 0 ; i < 26;i++)
            {
                if ( n & 1 )
                {
                    if( cnt[i] > (n / 2 ) + 1 )
                        ok =0;
                }
                else
                {
                    if( cnt[i] > (n / 2 ) )
                        ok =0;
                }

            }
            if( ok ) 
                return "possible";
            else
                return "impossible";
        }
};
