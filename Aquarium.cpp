// BEGIN CUT HERE
// PROBLEM STATEMENT
// You have a fish aquarium. You are given a int[]  fishSizes, denoting the size of each fish in the aquarium. They've been getting along pretty well so far, but you would now like to add a new fish (called Bob). You know that fish sometimes eat each other. You estimate that a fish might eat another fish if and only if it is at least two times larger, but no more than ten times larger, than that other fish.

Considering this, you would like to choose Bob's size such that:
- Bob is not in danger of being eaten by any other fish (i.e., its size is not between 1/10 and 1/2, inclusive, the size of any other fish).
- Bob is not tempted to eat any other fish (i.e., no other fish in the aquarium has a size between 1/10 and 1/2, inclusive, of Bob's size).
 Your task is to return the number of different integer sizes for Bob between minSize and maxSize, inclusive, that won't cause any eating "conflicts" with other fish.

DEFINITION
Class:Aquarium
Method:peaceful
Parameters:int, int, vector <int>
Returns:int
Method signature:int peaceful(int minSize, int maxSize, vector <int> fishSizes)


NOTES
-Mulitple fish may have the same size.  Also, we know that the existing fish get along, so we do not need to worry about eating conflicts between existing fish, regardless of their relative sizes.


CONSTRAINTS
- minSize  is between 1 and 1000, inclusive.
- maxSize  is between  minSize  and 1000, inclusive.
- fishSizes  has between 1 and 50 elements, inclusive.
-Each element of  fishSizes  is between 1 and 1000, inclusive.


EXAMPLES

0)
1
12
{1}

Returns: 3

We want to check which sizes between 1 and 12 will satisfy our constraints. Since we have a fish of size 1 in the aquarium, a new fish with a size between 2 and 10 will put it in danger. The remaining available sizes for Bob are 1, 11 and 12. Thus, the answer is 3.

1)
1
36
{3}

Returns: 10

There are 10 valid sizes: 2, 3, 4, 5, 31, 32, 33, 34, 35 and 36. Note that Bob cannot have a size of 1 since it may be eaten by the size 3 fish in the aquarium.

2)
1
1000
{10, 100, 500}

Returns: 4

3)
5
880
{1, 3, 9, 27, 243, 729}

Returns: 121

4)
3
997
{10, 11, 12, 13, 14, 16, 82, 83, 84, 85, 720, 730, 740, 750, 760, 770}

Returns: 147

5)
2
999
{941, 797, 120, 45, 7, 120}

Returns: 10

6)
1
791
{1, 4, 12, 25, 79, 556, 625, 800, 801, 950, 952, 954, 956, 958, 980, 1000}

Returns: 1

// END CUT HERE
#line 86 "Aquarium.cpp"
#include <string>
#include <vector>

class Aquarium {
	public:
	int peaceful(int minSize, int maxSize, vector <int> fishSizes) {
		
	}
};
