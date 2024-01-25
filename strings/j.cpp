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
    string palavra, palavra2;

    getline(cin, palavra);
    getline(cin, palavra2);

    if (palavra.compare(palavra2) == 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}