#line 2 "RobotOnMoonEasy.cpp"
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
#define debug(x)                 {cerr <<#x<<" = " <<x<<"\n"; }
#define debug2(x,y)             {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define snuke(c , it)             for(__typeof((c).begin()) it=(c).begin(); it!=(c).end();it++)
const int mod = 1e9+7;

inline ll gcd ( ll a , ll b) { ll t; while(b) { a=a%b;t=a;a=b;b=t;}return a;}
inline ll lcm ( ll a,  ll b) { return a/gcd(a,b)*b;}

class RobotOnMoonEasy {
	public:
	string isSafeCommand(vector <string> board, string S) {

        
        int n = board.size(); 
        int m = board[0].size(); 


        int len = S.length();
        int xx , yy;
        for(int i = 0; i < n ; i++)
            for(int j =0 ; j < m; j++)
                if( board[i][j] == 'S')
                    xx = i, yy = j;
        int ok  = 1; 
        board[xx][yy] = '.';
        for (int i = 0; i < len; i++)
        {
            //follow instrcut
            // xx yy
            if ( S[i] == 'U' )
            {
                if( xx - 1 < 0 )
                {
                    ok = 0; break;
                }
                if (board[xx-1][yy] == '.')
                {
                    xx = xx - 1;
                    yy = yy;
                }
            }
            if ( S[i] == 'D' )
            {
                if( xx + 1 >= n )
                {
                    ok = 0; break;
                }
                if (board[xx+1][yy] == '.')
                {
                    xx = xx + 1;
                    yy = yy;
                }
            }
            if ( S[i] == 'L' )
            {
                if( yy - 1 < 0 )
                {
                    ok = 0; break;
                }
                if (board[xx][yy-1] == '.')
                {
                    xx = xx ;
                    yy = yy - 1;
                }
            }
            if ( S[i] == 'R' )
            {
                if( yy + 1 >= m )
                {
                    ok = 0; break;
                }
                if (board[xx][yy+1] == '.')
                {
                    xx = xx ;
                    yy = yy + 1;
                }
            }
        }

                


    if ( ok) 
        return "Alive";
    else
        return "Dead";









		
	}
};
