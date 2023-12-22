#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
  map<int, int> mp;
  vector<int> arr = {1, 3, 4, 5, 6, 4, 1};
  int res = INT_MAX;

  for (size_t i = 0; i < arr.size(); i++)
  {
    if (mp[arr[i]] == 0)
    {
      mp[arr[i]] = i + 1;
    }
    else
    {
      res = res < i - (mp[arr[i]]) ? res : i - (mp[arr[i]] - 1);
    }
  }

  if(res == INT_MAX){
    cout << -1 << endl;
  }else{
    cout << res << endl;
  }
}

/*
  IDE FOR THIS PROBLEM:
  1. Loop through an array/list into map <int, int>
  2. Map with key = value, value = index of array
  3. ie. {1,3,4,7} => {1: 0, 3: 1, 4: 2, 7: 3};
  4. For every loop, always check is there any value with same key
  5. ie. For the above array, in index 5, we check there is map with key 4 and value: 2. So we update value res into max(res, curr_index - mp[curr_index]);
  6. In the end, just return res

  Here is simple pseudocode:
  ARRAY a[0..n]
  MAP mp
  res = 0
  FOR(i = a[0] to a[n]) do:
    if(mp[a[i]] NOT NULL) do:
      res <- min(res, i - mp[a[i]])
    else do:
      mp[a[i]] <- i
  OUTPUT res

  Analysis Complexity:
  O(N) because only take 1 looping
*/
