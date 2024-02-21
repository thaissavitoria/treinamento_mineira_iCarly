#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<ll> fib;

void fibonacci(int n) {
    fib.resize(n + 2);
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3];
    }
}

int main() {
    _;

    int t;

    cin >> t;


    if (t == 1)
        cout << 1 << endl;
    else {
        fibonacci(t - 1);
        cout << fib[t - 1] << endl;
    }
    return 0;
}