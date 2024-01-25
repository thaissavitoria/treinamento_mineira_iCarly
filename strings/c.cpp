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
    vector<string> nomes;
    vector<string> nomeAbrev;
    string nome;

    map<string, string> preposi;

    preposi["de"] = "de";
    preposi["da"] = "da";
    preposi["do"] = "do";
    preposi["dos"] = "dos";
    preposi["e"] = "e";

    getline(cin, nome);

    istringstream stream(nome);
    string palavra;

    while (stream >> palavra) {
        nomes.push_back(palavra);
    }

    for (auto nom : nomes) {
        if (nom != nomes[0]) {
            if (nom != nomes[nomes.size() - 1]) {
                if (preposi.find(nom) == preposi.end()) {
                    nome.clear();
                    nome.push_back(nom[0]);
                    nome.push_back('.');
                    nomeAbrev.push_back(nome);
                    continue;
                } else {
                    continue;
                }
            }
        }
        nomeAbrev.push_back(nom);
    }

    for (auto nom : nomeAbrev) {
        if (nom != nomeAbrev[nomeAbrev.size() - 1])
            cout << nom << " ";
        else
            cout << nom << endl;
    }

    return 0;
}