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

    int N;
    cin >> N;

    unordered_map<int, int> ocorrencias;

    for (int i = 0; i < N; ++i) {
        int numero;
        cin >> numero;
        ocorrencias[numero]++;
    }

    int numeroMaiorOcorrencia = -1;
    int frequenciaMaiorOcorrencia = -1;

    for (const auto& par : ocorrencias) {
        int numero = par.first;
        int frequencia = par.second;

        if (frequencia > frequenciaMaiorOcorrencia || (frequencia == frequenciaMaiorOcorrencia && numero > numeroMaiorOcorrencia)) {
            numeroMaiorOcorrencia = numero;
            frequenciaMaiorOcorrencia = frequencia;
        }
    }

    cout << numeroMaiorOcorrencia << " " << frequenciaMaiorOcorrencia << endl;

    return 0;
}