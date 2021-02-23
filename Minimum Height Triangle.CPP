

#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
   int h=ceil((2.0*area)/base);

    return h;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
