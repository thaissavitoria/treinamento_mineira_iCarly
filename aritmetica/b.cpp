#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<ll> tokenizar(const string &linha) {
    vector<ll>tokens;
    stringstream ss(linha);
    char del = ' ';
    string token;

    while (getline(ss, token, del)) {
        ll num = stod(token);
        tokens.emplace_back(num);
    }

    return tokens;
}

int main() {
    _;

    int n;
    string line;

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, line);
        vector<ll> tokens = tokenizar(line);
        ll total = 0;
        ll aux = 0;
        ll mes = 0;

        ll T = tokens[0];
        ll I = tokens[1];
        ll A = tokens[2];

        aux = I;
        while (total < T) {
            total += aux;
            aux += A;
            mes++;
        }
        cout << mes << endl;
    }

    return 0;
}