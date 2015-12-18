#line 2 "EightRooks.cpp"
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

class EightRooks {
	public:
	string isCorrect(vector <string> board) {

    int c = 0;
    for (int i = 0 ; i < 8; i++)
        for (int j = 0 ; j < 8; j++)
            if ( board[i][j] == 'R')
                c++;
    if(c != 8 )
        return "Incorrect";


    for (int i = 0 ; i < 8; i++)
    {
        //row check
        int cnt = 0;
        for (int j = 0 ; j < 8; j++)
        {
            if ( board[i][j] == 'R') 
                cnt++;
        }
        if ( cnt > 1 )
            return "Incorrect";
    }
    for (int i = 0 ; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0 ; j < 8; j++)
        {
            if ( board[j][i] == 'R') 
                cnt++;
        }
        if ( cnt > 1 )
            return "Incorrect";
    }

            
    return "Correct";

            


		
	}
};
