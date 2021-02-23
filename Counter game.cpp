#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
ull a[1000000], highest;
void tothepower() {
  ull i = 1;
  ull n = 1;
  while (n > 0 && n < 18446744073709551615) {
    n = pow(2, i);
    a[i] = n;
    // cout<<a[i]<<" ";
    i++;
    highest = i;
  }
}
using namespace std;
int main() {
  ull t;
  tothepower();

  cin >> t;
  while (t--) {
    ull n;
    cin >> n;
    int c = 0;
    ull temp;
    ull check = 0;
    while (n > 1) {
      // cout<<"start "<<n<<endl;
      for (int i = 1; i < highest; i++) {
        if (a[i] == n) {
          temp = n;

          break;
        }
        if (a[i] > n) {
          temp = a[i - 1];
          check = 1;
          break;
        }
      }
      if (check == 1) {
        n = n - temp;
        //  cout<<n<<endl;
      } else {
        n = n / 2;
        // cout<<n<<endl;
      }

      c++;
      check = 0;
    }
    if (c % 2 == 1)
      cout << "Louise" << endl;
    else
      cout << "Richard" << endl;
  }
}

