
#include <bits/stdc++.h>
using namespace std;
long long int merge(int A[], int mid, int left, int right) {
  long long int count = 0;
  int k = 0;
  int temp[right - left + 1];
  int i = left;
  int j = mid;
  while (i < mid && j <= right) {
    if (A[i] > A[j]) {
      count += mid - i;
      temp[k++] = A[j++];
    } else {
      temp[k++] = A[i++];
    }
  }
  while (i < mid) temp[k++] = A[i++];
  while (j <= right) temp[k++] = A[j++];
  for (int i = left, k = 0; i <= right; i++, k++) A[i] = temp[k];
  return count;
}
long long int mergesort(int A[], int left, int right) {
  // int count  = 0;
  if (right > left) {
    int mid = (right + left) / 2;
    long long int c1 = mergesort(A, left, mid);
    long long int c2 = mergesort(A, mid + 1, right);
    long long mcount = merge(A, mid + 1, left, right);
    return c1 + c2 + mcount;
  }
  return 0;
}
long long solve(int A[], int n) {
  long long int ans = mergesort(A, 0, n - 1);
  return ans;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(arr, n) << endl;
  }
  return 0;
}

