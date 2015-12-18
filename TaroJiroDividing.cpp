#line 2 "TaroJiroDividing.cpp"
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

class TaroJiroDividing {
	public:
	int getNumber(int A, int B) {
        
        vi a , b;

        a.pb(A);
        while ( A%2 == 0 )
        {
            A /= 2;
            a.pb(A);
        }
        
        b.pb(B);
        while ( B%2 == 0 )
        {
            B /= 2;
            b.pb(B);
        }

        ll n = a.size();
        ll m = b.size();
        ll t = max (  n , m);
        sort ( all (a));
        sort ( all (b));

        vi ans(2 * t );

        vector <int >::iterator it = set_intersection(all(a),all(b),ans.begin());
        ans.resize(it-ans.begin());
        return ans.size();
		
	}
};