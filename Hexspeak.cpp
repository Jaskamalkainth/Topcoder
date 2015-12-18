#line 2 "Hexspeak.cpp"
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
#include <iostream>
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

class Hexspeak {
	public:
	string decode(long long sss) {

    vector<char>  ans ;

    while(sss > 0)
    {
        int rem = sss % 16;
        if ( rem == 10 )
            ans.pb('A');
        else if ( rem == 11 )
            ans.pb('B');
        else if ( rem == 12 )
            ans.pb('C');
        else if ( rem == 13 )
            ans.pb('D');
        else if ( rem == 14 )
            ans.pb('E');
        else if ( rem == 15 )
            ans.pb('F');
        else if ( rem == 0 )
            ans.pb('O');
        else if ( rem == 1 )
            ans.pb('I');
        else 
            ans.pb('Z');

        sss = sss / (ll) 16;
	}


    string anss;
for (int i = 0 ;i < ans.size(); i++)
{
    if(ans[i] == 'Z')    
    return "Error!";
    anss += ans[i];

}
reverse(all(anss));
return  anss;
}
};
