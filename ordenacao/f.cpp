#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct Participante {
    string nome;
    int idade;
};

bool compararParticipantes(const Participante &a, const Participante &b) {
    if (a.idade == b.idade) {
        return a.nome < b.nome;
    }
    return a.idade > b.idade; 
}


int main() {
    _;

    int N;
    cin >> N;

    


    vector<Participante> participantes(N);

    
    for (int i = 0; i < N; ++i) {
        cin.ignore(); 
        getline(cin, participantes[i].nome, ',');
        cin >> participantes[i].idade;
    }

    
    sort(participantes.begin(), participantes.end(), compararParticipantes);

    for (const Participante &p : participantes) {
        cout << p.nome << endl;
    }

    return 0;
}