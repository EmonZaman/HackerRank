
#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int n, int k) {
  deque<int> De;
  int i;

  for (i = 0; i < k; i++) {
    while (!De.empty() && arr[i] >= arr[De.back()]) {
      De.pop_back();
    }
    De.push_back(i);
  }

  for (i = k; i < n; i++) {
    cout << arr[De.front()] << " ";

    while (!De.empty() && De.front() <= i - k) {
      De.pop_front();
    }
    while (!De.empty() && arr[i] >= arr[De.back()]) {
      De.pop_back();
    }
    De.push_back(i);
  }
  cout << arr[De.front()] << endl;
}

int main() {

  int t;
  scanf("%d", &t);
  while (t--) {
    int n, k;
    cin >> n >> k;
    int i;
    int *arr = new int[n];
    for (i = 0; i < n; i++)
      cin >> arr[i];
    print(arr, n, k);
  }
  return 0;
}
