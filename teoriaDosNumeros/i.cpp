#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    string num;
    cin >> num;

    for (int i = 0;i <= 20;i++) {
        int n1 = atoi(num.c_str());
        reverse(num.begin(), num.end());
        int res = n1 + atoi(num.c_str());
        num = to_string(res);
        string reverso = num;
        reverse(reverso.begin(), reverso.end());
        if (num.compare(reverso) == 0) {
            cout << "0" << endl;
            return 0;
        }
    }

    cout << "1" << endl;

    return 0;
}