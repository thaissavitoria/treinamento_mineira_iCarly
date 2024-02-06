#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int tokenData(string &data) {
    char del = '/';

    stringstream sstream(data);
    string token;

    vector<string> tokens;
    int cont = 0;
    int soma = 0;

    while (getline(sstream, token, del)) {
        if (cont == 0) soma += stoi(token);
        else if (cont == 1) soma += stoi(token) * 30;
        else if (cont == 2) soma += stoi(token) * 365;
        cont++;
    }
    return soma;
}

int tokenHora(string &hora) {
    char del = ':';

    stringstream sstream(hora);
    string token;

    vector<string> tokens;
    int cont = 0;
    int soma = 0;

    while (getline(sstream, token, del)) {
        if (cont == 0) soma += stoi(token) * 3600;
        else if (cont == 1) soma += stoi(token) * 60;
        else if (cont == 2) soma += stoi(token);
        cont++;
    }
    return soma;
}

vector<string> tokenizar(string &text) {
    char del = ' ';

    stringstream sstream(text);
    string token;

    vector<string> tokens;
    int aux = 0;
    string str = "";

    while (getline(sstream, token, del)) {
        if (aux++ < 2)
            tokens.push_back(token);
        else {
            return tokens;
        }
    }
    return tokens;
}

int main() {
    _;

    string log;
    vector<tuple<ll, ll, string>> logs;
    ll i = 0;

    while (getline(cin, log)) {
        auto tokens = tokenizar(log);
        auto data = tokenData(tokens[0]);
        auto hora = tokenHora(tokens[1]);

        ll dataHora = static_cast<ll>(data) * 24 * 3600 + hora;

        logs.push_back({ dataHora, i++, log });
    }

    stable_sort(logs.begin(), logs.end());
    for (auto l : logs) {
        cout << get<2>(l) << endl;
    }

    return 0;
}
