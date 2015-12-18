#line 2 "BearPlaysDiv2.cpp"
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <iostream>
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

class BearPlaysDiv2 {
	public:
	string equalPiles(int A, int B, int C) {
       


    vi a;
    a.pb(A);
    a.pb(B);
    a.pb(C);

    const int mx = 1e6+7;
    for (int i = 0 ; i < mx; i++)
    {
        sort(all(a));
        if( a[0] == a[1] && a[1] == a[2] )
            return "possible";
        cout << ( a[0] ) << "\n";;
        cout << ( a[1] ) << "\n";;
        cout << ( a[2] ) << "\n";;
    int t = a[0];
        a[0] = a[0] + t;
        a[1] = a[1] - t;
        if( a[0] == a[1] && a[1] == a[2] )
            return "possible";
    }
        return "impossible";

		
	}
};
