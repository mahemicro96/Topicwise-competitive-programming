#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
main() {
  int n;
  cin >> n;
  while (n--) {
    int e, c = 0, t = 0;
    cin >> e;
    int a[e], b[e];
    for (int i = 0; i < e; i++) cin >> a[i];
    for (int j = 0; j < e; j++) cin >> b[j];
    sort(a, a + e);
    sort(b, b + e);
    int plat = 1, i = 1, j = 0, result = 1;
    while (i < e && j < e) {
      if (a[i] <= b[j]) {
        plat++;
        i++;
        if (plat > result) result = plat;
      } else {
        j++;
        plat--;
      }
    }
    cout << result << endl;
  }
}