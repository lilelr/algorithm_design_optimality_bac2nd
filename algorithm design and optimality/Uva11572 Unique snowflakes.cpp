#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define LL long long
const int maxn = 1000;
int nums[maxn];

// O(nlogn)
int main() {
  freopen("/Users/yuxiao/XcodeProject/algorithm design and "
          "optimality/algorithm design and optimality/in",
          "r", stdin);
  freopen("/Users/yuxiao/XcodeProject/algorithm design and "
          "optimality/algorithm design and optimality/out",
          "w", stdout);

  int T, n;
  cin >> T;
  while (T--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    set<int> s;
    int L = 0, R = 0, ans = 0;
    while (R < n) {
      while (R < n && !s.count(nums[R])) {
        s.insert(nums[R++]);
      }
      ans = max(ans, R - L);
      s.erase(nums[L++]);
    }
    cout << ans << endl;
  }
  return 0;
}
