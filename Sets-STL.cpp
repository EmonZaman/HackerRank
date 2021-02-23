
#include <bits/stdc++.h>
#include <iterator>
#include <stdio.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  set<int> s;
  int n1, n2;
  while (n--) {
    scanf("%d %d", &n1, &n2);
    if (n1 == 1) {
      s.insert(n2);
    } else if (n1 == 2) {
      s.erase(n2);
    } else {
      set<int>::iterator it = s.find(n2);
      if (it != s.end())
        printf("Yes\n");
      else
        printf("No\n");
    }
  }
  return 0;
}
