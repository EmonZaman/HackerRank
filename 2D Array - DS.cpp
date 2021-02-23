#include <bits/stdc++.h>
using namespace std;

int main() {

  int a[10][10];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> a[i][j];
    }
  }
  int sum, temp = -2140000000 - 1;
  for (int i = 0; i < 6 - 2; i++) {
    for (int j = 0; j < 6 - 2; j++) {
      sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] +
            a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
      // cout<<sum<<endl;
      if (sum > temp)
        temp = sum;
    }
  }
  cout << temp << endl;
}

