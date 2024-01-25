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

    string a, b;

    getline(cin, a);
    getline(cin, b);

    unordered_map<char, int> m;

    for (int i = 0; i < a.size(); i++) {
        m[a[i]]++;
    }
    ////isabel 

    for (int i = 0; i < b.size(); i++) {
        m[b[i]]--;
    }
    ////belisa

    if (a.size() != b.size()) {
        cout << "nao" << endl;
        return 0;
    } else {
        for (auto &[key, value] : m) {
            if (value != 0) {
                cout << "nao" << endl;
                return 0;
            }
        }
    }
    cout << "sim" << endl;

    return 0;
}