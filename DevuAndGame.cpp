#line 2 "DevuAndGame.cpp"
#include <string>
#include <vector>
using namespace std;

class DevuAndGame {
    public:
        string canWin(vector <int> nextLevel) {


            int n = nextLevel.size();
            int vis[n];
            for (int i = 0; i < n ; i++)
            {
                vis[i]= 0;
            }
            int i = 0;
            while(1)
            {
                if ( nextLevel[i] == -1 )
                    return "Win";
                else
                {
                    i = nextLevel[i];
                    int flag =0; 
                    for (int i = 0; i<n; i++) 
                        if( !vis[i] )
                            flag = 1;
                    if ( flag == 0)
                        return "Lose";
                    if (vis[i] )
                        return "Lose";
                    else
                        vis[i] = 1;
                }
            }
        }
};
