#line 2 "ChessFloor.cpp"
#include <string>
#include <vector>
#include <iostream>
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
#define snuke(c , it)             for(__typeof((c).begin() it=(c).begin(); it!=(c).end();it++)
const int mod = 1e9+7;

inline ll gcd ( ll a , ll b) { ll t; while(b) { a=a%b;t=a;a=b;b=t;}return a;}
inline ll lcm ( ll a,  ll b) { return a/gcd(a,b)*b;}

class ChessFloor {
	public:
	int minimumChanges(vector <string> ff) {

    int n = ff[0].size();

	int a1 = 0 , a2 = 0 , ans = 0; 
    // try all possibilities

    for ( char i = 'a' ; i <= 'z' ; i++)
    {
        for ( char j = 'a' ; i!=j && j <= 'z' ; j++)
        {
        
            for (int  k = 0 ; k < n; k++)
            {
                for(int z = 0 ; z < n; z++)
                {
                    // ijijij


                    if( k&1 )
                    {
                        if(  z%2 == 0  && ff[k][z] != i )
                            a1++;
                        else if ( z%2 == 1  && ff[k][z] !=j)
                            a1++;
                    }
                    else
                    {
                        if(  z%2 == 0  && ff[k][z] != j )
                            a1++;
                        else if ( z%2 == 1  && ff[k][z] !=i)
                            a1++;
                    }
                }
            }
        ans = min ( a1 ,a2);
        }
    }

    return ans;

	}
};
