#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;
typedef long long          ll;
typedef long double        ld;
typedef pair<int,int>      pii;
typedef pair<ll,ll>        pll;
typedef vector<int>        vi;
typedef vector<long long>  vll;
#define mp                 make_pair
#define pb                 push_back
#define all(a)             a.begin(),a.end()
#define sor(a)             sort(all(a));
#define rsor(a)            sor(a) reverse(all(a));
#define pr(n)              printf("%d ",n)
#define s(n)               scanf("%d",&n)
#define debug(a)           std::cerr<<#a<<"="<<(a)<<"\n"
#define ss                 second
#define ff                 first
#define snuke(c,itr)       for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
const int mod=1e9+7;
const long double PI = (long double)(3.1415926535897932384626433832795);

inline bool ispow2(int x){return (x!=0 && (x&(x-1))==0);} //0 or 1

template<class T>
inline void cinarr(T a, int n){ for (int i=0;i<n;++i) cin >> a[i];}

inline ll powmod(ll a,ll b) {ll res = 1; while(b){if(b&1) res = (res*a)%mod;a = (a*a)%mod;b >>= 1;}return res;}

int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }

inline ll gcd(ll a,ll b){ll t;while(b){a=a%b;t=a;a=b;b=t;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int G[57][57];
const int INF=1e7+7;

int f(char c)
{
    if ( c== ' ') 
        return INF;
    if(c<='9') return c - '0' ;
    else if ( c<= 'Z') 
        return c-'A' +36;
    else
        return c - 'a' + 10;
}


class EscapingJail {
	public:
	int getMaxDistance(vector <string> ch) {
        
            int n=ch.size();
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    G[i][j]=f(ch[i][j]);
            

            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    for(int k=0;k<n;k++)
                        G[j][k]=min(G[j][k],G[j][i]+G[i][k]);



            int ans=0;
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                      ans=max(ans,G[i][j]);

            if(ans==INF)
                return -1;


            else

                return ans;
	}
};
