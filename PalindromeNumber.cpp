#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string x)
{
  if (x.size() <= 1)
  {
    return true;
  }
  int l = 0;
  int r = x.size() - 1;
  while (l < r)
  {
    if(x[l] != x[r]){
      return false;
    }
    l++; 
    r--;
  }
  return true;
}

int main() {
  int x; cin >> x;
  bool palindrome = isPalindrome(to_string(x));
  if(palindrome){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}

/*
  1. Actually for palindrome have 2 options to solve,
  FIRST APPROACH
  1. reverse the string and put in variable, then match with old variable
  2. Analysis complexity for first solution is O(N), because reverse string usually takes 1 through loop
  3. We can utilize built in function in cpp or many programming languages to reverse a string easily.

  Pseudocode:
  procedure PALINDROME(X):
    x_reverse <- reverse(X)
    if (x_reverse = x):
      return true
    return false

  // SECOND APPROACH, WITHOUT UTILIZE LIBRARY
  1. Check every character in index i and (n - 1) - i
  2. if not match, return false immediately
  3. If all character match, return true
  4. This solution i think good, because we can check immediately with average complexity under O(N)

  Psedocode
  procedur PALINDROME(X):
    l <- 0
    r <- X.size() - 1
    while(l < r) do:
      if(X[l] != X[r])
        return false
      l <- l + 1
      r <- r + 1
    return true

  Both solution i think will return same complexity is O(N), but i will code for the second one.
*/
