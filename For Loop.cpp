
#include <bits/stdc++.h>
using namespace std;
int main() {
  string str[] = {"",     "one", "two",   "three", "four",
                  "five", "six", "seven", "eight", "nine"};
  long long x, y;
  cin >> x >> y;
  for (int i = x; i <= y; i++) {

    if (i <= 9)
      cout << str[i] << endl;
    else {
      if (!(i % 2))
        cout << "even" << endl;
      else
        cout << "odd" << endl;
    }
  }
  return 0;
}
