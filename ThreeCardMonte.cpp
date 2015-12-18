// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

// }}}

class ThreeCardMonte
{
public:
	string position(string swaps)
	{
		int l=swaps.length();
		string a[]={"J","A","J"};
		for(int i=0;i<l;i++){
			if(swaps[i]=='L')
				swap(a[0],a[1]);
			if(swaps[i]=='R')
				swap(a[1],a[2]);
			if(swaps[i]=='E')
				swap(a[0],a[2]);
		}
		if(a[0]=="A") return "L";
		if(a[1]=="A") return "M";
		if(a[2]=="A") return "R";
	}
};
