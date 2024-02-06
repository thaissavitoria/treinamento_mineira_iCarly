#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _;

    map<int, vector<string>> m;

    int t;
    string s;

    cin >> t;
    cin.ignore();

    while (t--) {
        getline(cin, s);

        int n = s.size();

        m[n].push_back(s);
    }

    for (auto &[key, value] : m) {
        sort(value.begin(), value.end());
        for (auto &v : value) {
            cout << v << endl;
        }
    }

    return 0;
}