#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

set<int> tokenizar(string &text) {
    char del = ' ';

    stringstream sstream(text);
    string token;

    set<int> tokens;

    while (getline(sstream, token, del)) {
        tokens.insert(stoi(token));
    }
    return tokens;
}

int main() {
    _;

    string entrada1;
    string entrada2;

    getline(cin, entrada1);
    getline(cin, entrada2);

    set<int> tokens1 = tokenizar(entrada1);
    set<int> tokens2 = tokenizar(entrada2);

    for (auto token : tokens2) {
        cout << token << " ";
        if (tokens1.find(token) == tokens1.end())
            cout << "Não está mapeado";
        else
            cout << "Está mapeado";
        cout << endl;
    }

    return 0;
}