// BEGIN CUT HERE
// PROBLEM STATEMENT
// 
A palindrome is a phrase that reads the same forward and backward (ignoring spaces).  Given the first half of a palindrome (as described below), you must return a complete palindrome that contains only words from a given set of legal words.   The returned palindrome must be a phrase where words are separated by single spaces.



You will be given the first half of the palindrome as a string text containing only letters and no spaces.  There are two complete palindromes that can be created from this first half.  For example, given "ABC", you could produce either "ABCCBA" or "ABCBA" as the complete palindrome.  You must then insert spaces into the complete palindrome such that all the words in the phrase exist in the vector <string> words



For example, given the list of words { "A", "CANAL", "MAN", "PANAMA", "PLAN" }, and the text "AMANAPLANAC", your method would return the string "A MAN A PLAN A CANAL PANAMA".



If no palindrome can be made, your method should return "".
If more than one palindrome can be made, return the one that comes first lexicographically (please note that ' ' comes before all letters).



DEFINITION
Class:Palindromist
Method:palindrome
Parameters:string, vector <string>
Returns:string
Method signature:string palindrome(string text, vector <string> words)


CONSTRAINTS
-text will contain between 1 and 50 characters, inclusive.
-text will contain only uppercase letters ('A'-'Z').
-words will contain between 1 and 50 elements, inclusive.
-Each element of words will contain between 1 and 50 characters, inclusive.
-Each element of words will contain only uppercase letters ('A'-'Z').


EXAMPLES

0)
"AMANAPLANAC"
{ "A", "CANAL", "MAN", "PANAMA", "PLAN" }

Returns: "A MAN A PLAN A CANAL PANAMA"

1)
"AAAAA"
{ "AA", "A", "AAA" }

Returns: "A A A A A A A A A"

2)
"CBA"
{ "CBABC", "CBAABC" }

Returns: "CBAABC"

3)
"RACEFAST"
{ "AR", "CAR", "FAST", "RACE", "SAFE", "CEFA", "ACE", "STTS", "AFEC" }

Returns: "RACE FAST SAFE CAR"

4)
"AABAABA"
{ "AA", "AAB", "BAA", "BAB" }

Returns: "AA BAA BAA BAA BAA"

5)
"STRAWNOTOOSTUPIDAF"
{ "WARTS", "I", "TOO", "A", "FAD", "STUPID", "STRAW", "PUT", "NO", "ON", "SOOT" }

Returns: "STRAW NO TOO STUPID A FAD I PUT SOOT ON WARTS"

6)
"AAAAA"
{ "AAAA" }

Returns: ""

7)
"A"
{ "A", "AA" }

Returns: "A"

// END CUT HERE
#line 89 "Palindromist.cpp"
#include <string>
#include <vector>

class Palindromist {
	public:
	string palindrome(string text, vector <string> words) {
		
	}
};
