#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ehPalindrome(const string &s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s.compare(t) == 0;
}

int main() {
    _;

    int t;
    int quant = 4;

    cin >> t;

    if (ehPalindrome(to_string(t))) {
        cout << t << endl;
        return 0;
    }

    while (quant--) {
        string aux = to_string(t);
        string contrario = aux;
        reverse(contrario.begin(), contrario.end());

        int soma = stoi(aux) + stoi(contrario);

        if (ehPalindrome(to_string(soma))) {
            cout << soma << endl;
            return 0;
        }
        t = soma;
    }
    cout << 0 << endl;
    return 0;
}