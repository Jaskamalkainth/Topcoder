#line 2 "ConnectingCars.cpp"
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

class ConnectingCars {
	public:
	long long minimizeCost(vector <int> pos, vector <int> len) {
        int n = pos.size();
        vector< pll > itrv(n) , copy(n);
    
        for (int i = 0; i < n ;i++)
        {
            itrv[i].ff = pos[i];
            itrv[i].ss = pos[i] + len[i];
        }
        copy = itrv;
        ll ans = 0ll;

        sort (all ( itrv));

        while ( 1 )
        {
            int ok = 0;
            for (int i = 0; i < n-1; i++)
            {
                if ( itrv[i].ss != itrv[i+1].ff)
                {
                    ll diff = itrv[i+1].ff - itrv[i].ss;
                    ans += diff;
                    debug (diff);
                    ok = 1;
                    itrv[i+1].ff = itrv[i].ss;
                    itrv[i+1].ss -= diff; 
                    break;
                }
            }
            snuke ( itrv , it )
                cout << (*it).ff << " " <<(*it).ss << "\n";
            if ( !ok )
                break;

        }
    
        return ans;







		
	}
};
