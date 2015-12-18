#line 2 "PointDistance.cpp"
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class PointDistance {
	public:
	vector <int> findPoint(int x1, int y1, int x2, int y2) {

        int x3, y3;
        long double dAC ,dBC;
       int  flag = 0;
        for (int i = -100; i<= 100; i++)
        {
            for (int j = -100; j<= 100; j++)
                {
                    if( ( i != x1 || j != y1 ) && ( i != x2 || j!= y2 ) )
                    {
                        dAC = (long double) sqrt( (x1-i)*(x1-i) + (y1-j)*(y1-j) );
                        dBC = (long double) sqrt( (x2-i)*(x2-i) + (y2-j)*(y2-j) );
                        if ( dAC > dBC) 
                        {
                            x3 = i;
                            y3 = j;
                            flag = 1;
                            break;
                        }
                    }
                    if ( flag) break;
                }
        }
        vector< int > ans ;
        ans.push_back(x3);
        ans.push_back(y3);
        return ans;
		
	}
};
