Code : Edit Distance
Send Feedback
Given two strings s and t of lengths m and n respectively, find the Edit Distance between the strings. Edit Distance of two strings is minimum number of steps required to make one string equal to other. In order to do so you can perform following three operations only :
1. Delete a character

2. Replace a character with another one

3. Insert a character
Note - Strings don't contain spaces
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
Line 1 : Edit Distance value
Constraints
1<= m,n <= 10
Sample Input 1 :
abc
dc
Sample Output 1 :
2




				PRACTICE




#include <iostream>
#include <vector>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

	//write your code here

}



				SOLUTION



















#include <iostream>
#include <vector>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

	//write your code here
 if(s1.length()==0) return s2.length();
    if(s2.length()==0) return s1.length();

    // both strings have atleast one character
    if(s1[0]==s2[0]) return editDistance(s1.substr(1), s2.substr(1));
    int a=editDistance(s1.substr(1), s2);  //Insert Operation
    int b=editDistance(s1, s2.substr(1));  //Delete Operation
    int c=editDistance(s1.substr(1), s2.substr(1)); //Replace Operation

    return min(min(a, b), c)+1;
}

#include "solution.h"

int main(){

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << editDistance(s1,s2) << endl;

}
