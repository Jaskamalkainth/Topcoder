#line 2 "FallingSand.cpp"
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
#define snuke(c , it)             for(__typeof((c).begin() it=(c).begin(); it!=(c).end();it++)
const int mod = 1e9+7;

inline ll gcd ( ll a , ll b) { ll t; while(b) { a=a%b;t=a;a=b;b=t;}return a;}
inline ll lcm ( ll a,  ll b) { return a/gcd(a,b)*b;}

class FallingSand {
	public:
	vector <string> simulate(vector <string> board) {
    //. o x

    int n = board[0].size();
    for (int i = 0 ; i < n; i++)
    {
        for(int j =0; j<n; j++)
        {
            int a = 0 , b= 0 ;
            if ( board[j][i] == 'o' )
            {
                a++;
            }
            if ( board[j][i] == '.' )
            {
                b++;
            }
            if(board[j][i] == 'x')
            {
                for (int k = 0; k < b; k++)
                {
                    board[j][k] = '.';
                }
                for (int k = b+1; k < i; k++)
                {
                    board[j][k] = 'o';
                }
                a = 0; b =0;
            }

        }
    }
vector <string> ans;

    for (int i = 0; i  <n ; i++)
    {
        ans.pb(board[i]);
        cout << ans[i]  << " ";;
    }


    return ans; 

		
	}
};
