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

    int t;
    int n;
    int soma = 0;

    cin >> t;

    while (t--) {
        cin >> n;

        if (n > 3) {
            soma += n - 3;
        }
    }
    cout << soma << endl;

    return 0;
}