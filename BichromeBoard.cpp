#line 2 "BichromeBoard.cpp"
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

class BichromeBoard {
	public:
	string ableToDraw(vector <string> board) {


    int n = board[0].size();
    int m = board.size();

    char p1[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            if(i&1)
            {   
                if ( j&1)
                    p1[i][j] = 'W';
                else
                    p1[i][j] = 'B';
            }
            else
            {
                if ( j&1)
                    p1[i][j] = 'B';
                else
                    p1[i][j] = 'W';
            }
        }
    }

    char p2[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            if(!(i&1))
            {   
                if ( j&1)
                    p2[i][j] = 'W';
                else
                    p2[i][j] = 'B';
            }
            else
            {
                if ( j&1)
                    p2[i][j] = 'B';
                else
                    p2[i][j] = 'W';
            }
        }
    }
    int ok1  = 1;
    int ok2 = 1;

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if ( board[i][j] == '?')
                continue;
            if( board[i][j] != p1[i][j] )
                ok1 = 0;
            if( board[i][j] != p2[i][j] )
                ok2 = 0;
        }
    }

    




if (ok1 == 1 || ok2 == 1 )
    return "Possible";
else
    return "Impossible";









































	}
};
