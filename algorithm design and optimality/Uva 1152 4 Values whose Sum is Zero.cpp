//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//#include <vector>
// using namespace std;
//#define LL long long
// const int maxn = 1000;
// int n, c, A[maxn], B[maxn], C[maxn], D[maxn], sums[maxn * maxn];
//
//// O(n^2logn)
// int main() {
//  freopen("/Users/yuxiao/XcodeProject/algorithm design and "
//          "optimality/algorithm design and optimality/in",
//          "r", stdin);
//  freopen("/Users/yuxiao/XcodeProject/algorithm design and "
//          "optimality/algorithm design and optimality/out",
//          "w", stdout);
//
//  int T, t;
//  cin >> T;
//  t = 1;
//  while (T--) {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//      cin >> A[i] >> B[i] >> C[i] >> D[i];
//    }
//    c = 0;
//    for (int i = 0; i < n; i++) {
//      for (int j = 0; j < n; j++) {
//        sums[c++] = A[i] + B[j];
//      }
//    }
//    sort(sums, sums + c);
//    long long cnt = 0;
//    for (int i = 0; i < n; i++) {
//      for (int j = 0; j < n; j++) {
//        cnt += upper_bound(sums, sums + c, -C[i] - D[j]) -
//               lower_bound(sums, sums + c, -C[i] - D[j]);
//      }
//    }
//    cout << cnt << endl;
//    cout << endl;
//  }
//  return 0;
//}
