#line 2 "InfiniteString.cpp"
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

class InfiniteString {
	public:
	string equal(string s, string t) {
    

    int sl = s.length();
    int tl = s.length();

    string a = s;
    string b = t;
    
    if ( sl < tl )
    {
        int ok = 1;
        while ( s != t )
        {
            string new_s = s + s;
            int len = new_s.length();
            if ( len > tl )
            {
                ok = 0;
                break;i
            }
        }
        if( ok ) 
            return "Equal";
        else
            return "Not equal";
    }
    else 
    {
        while ( a != b )
        {
            b += b;
            int len = b.length();
            if ( len > sl )
            {
                return "Not equal";
            }
        }
        return "Equal";
    }

    }
};
