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

    string t;

    getline(cin, t);

    vector<string> v;
    string new_s = "";

    new_s += t[0];

    for (int i = 1; i < t.size(); i++) {
        if (t[i] == t[i - 1]) new_s += t[i];
        else {
            v.push_back(new_s);
            new_s = "";
            new_s += t[i];
        }
    }
    v.push_back(new_s);
    new_s = "";

    for (auto s : v) {
        new_s += s[0];
        if (s.size() > 1) new_s += to_string(s.size());
    }

    cout << (new_s.size() < t.size() ? new_s : t) << endl;

    return 0;
}