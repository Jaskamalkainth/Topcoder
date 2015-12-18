#line 2 "FilipTheFrog.cpp"
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

class FilipTheFrog {
    public:
        int countReachableIslands(vector <int> positions, int L) {

            int curr = positions[0];
            sort(all(positions));

            if ( positions.size() == 1) return 1;

            if ( positions.size() == 2 )
            {
                if ( positions[1] - positions[0]  <= L)
                    return 2;
                else
                    return 1;
            }


            vector<int>::iterator it  = find(all(positions) ,curr);
            vector<int>::iterator it2 = it + 1 ;
            int ans = 1;
            while( it != positions.end() )
            {
                if ( abs( *it - *it2) <= L )
                {
//                    debug2(*it , *it2);
                    ans++;
                    it++;
                    it2++;

                }
                else 
                    break;
            }
            it  = find(all(positions) ,curr);
            vector<int>::iterator it1 = it - 1 ;

            while( it!= positions.begin() )
            {
                if ( abs( *it - *it1) <= L )
                {
                    ans++;
  //                  debug2(*it , *it1);
                    it--;
                    it1--;
                }
                else

                    break;

            }

            return ans;


	}
};
