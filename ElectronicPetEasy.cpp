#line 2 "ElectronicPetEasy.cpp"
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
#define debug(x)                 {cerr <<#x<<" = " <<x<<"\n"; }
#define debug2(x,y)             {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define snuke(c , it)             for(__typeof((c).begin()) it=(c).begin(); it!=(c).end();it++)
const int mod = 1e9+7;

inline ll gcd ( ll a , ll b) { ll t; while(b) { a=a%b;t=a;a=b;b=t;}return a;}
inline ll lcm ( ll a,  ll b) { return a/gcd(a,b)*b;}

class ElectronicPetEasy {
	public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2) {
        vi f , s;

        f.pb(st1);
        while(--t1)
        {
            f.pb(st1+p1);
            st1 += p1;
        }
       
        s.pb(st2);
        while(--t2)
        {
            s.pb(st2+p2);
            st2 += p2;
        }

        sort(all(f));
        sort(all(s));
    
        vi ans;
        ans.resize(t1+t2+100);
        vector<int>::iterator it = set_intersection(all(f),all(s),ans.begin());
        ans.resize(it - ans.begin());

        if(ans.size() != 0 )
            return "Difficult";
        else
            return "Easy";





		
	}
};
