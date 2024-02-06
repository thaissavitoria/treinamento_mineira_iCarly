#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<double> tokenizar(const string &linha) {
    vector<double>tokens;
    stringstream ss(linha);
    char del = ' ';
    string token;

    while (getline(ss, token, del)) {
        double num = stod(token);
        tokens.emplace_back(num);
    }

    return tokens;
}

int main() {
    _;

    string linha;

    getline(cin, linha);


    vector<double> tokens = tokenizar(linha);

    double min = tokens[0];
    double seg = tokens[1];

    double tempo = min * 60 + seg;
    double aux = tempo / 60 / 10;

    cout << fixed << setprecision(1) << aux << endl;
    cout << fixed << setprecision(1) << aux * 21 << endl;

    return 0;
}