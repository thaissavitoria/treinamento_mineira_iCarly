#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<double> tokenizar(const string &frase) {
    vector<double>tokens;
    stringstream ss(frase);
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
    int num;
    cin >> num;
    cin.ignore();

    vector<string>entradas;
    string linha;

    while (num--) {
        getline(cin, linha);
        entradas.emplace_back(linha);
    }


    for (auto l : entradas) {
        vector<double>numeros = tokenizar(l);
        if (numeros[0] < numeros[2] && numeros[0] > numeros[1])
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }

    return 0;
}