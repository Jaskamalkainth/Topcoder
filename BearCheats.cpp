#line 2 "BearCheats.cpp"
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

class BearCheats {
	public:
	string eyesight(int A, int B) {

    vi a , b; 
    while ( A>0) 
    {
        int r = A % 10;
        a.pb(r);
        A /= 10;
    }
    while ( B>0) 
    {
        int r = B % 10;
        b.pb(r);
        B /= 10;
    }
    int cnt = 0;
    int l = a.size();
    for (int i = 0; i < l ; i++)
    {
        if ( a[i] != b[i] )
        {
            cnt += 1;
        }
    }
    if ( cnt <= 1)
    {
        return "happy";
    }
    else
    {
        return "glasses";
    }


    
		
	}
};
