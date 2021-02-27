#include<bits/stdc++.h>
using namespace std;

struct Student
{
    unsigned age{};
    std::string first_name{};
    std::string last_name{};
    unsigned standard{};
};
int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
