#line 2 "LuckyXor.cpp"
#include <string>
#include <vector>
using namespace std;

class LuckyXor {
    public:
        int construct(int a) {

            int b ;
            for ( b = a+1; b <= 100; b++)
            {
                int res = a^b;

                int ok = 1;
                int t = res;
                
                
                while(t > 0)
                {
                    int r = t%10;
                    if ( r== 4 || r==7)
                    {
                       t = t/10;
                       continue;
                    }

                    else 
                    {
                        ok = 0;
                        break;
                    }
                }

                if(ok  == 0)
                    continue;
                else 
                {
                    return b;
                }

            }
            return -1;



        }
};
