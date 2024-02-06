#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

class Dado {
public:
    int key;
    int value;

    Dado() {}
    Dado(int key) :key(key), value(0) {}
    Dado(int key, int value) :key(key), value(value) {}
    ~Dado() {}
};

class NO {
public:
    NO *esq;
    NO *dir;
    Dado dado;

    NO(Dado dado) :esq(nullptr), dir(nullptr), dado(dado) {}
    ~NO() { delete esq; delete dir; }
};

class Arvore {
private:
    NO *root;
    NO *insertRecord(NO *atual, Dado dado);

    void preOrdemRecorsive(NO *atual);
    void centralRecorsive(NO *atual);
    void posOrdemRecorsive(NO *atual);
public:
    Arvore() { root = nullptr; }
    ~Arvore() { delete root; }

    void insert(Dado dado) { root = insertRecord(root, dado); }

    void preOrdem();
    void central();
    void posOrdem();
};

NO *Arvore::insertRecord(NO *atual, Dado dado) {
    if (atual == nullptr) return new NO(dado);

    if (dado.key < atual->dado.key)
        atual->esq = insertRecord(atual->esq, dado);
    else if (dado.key > atual->dado.key)
        atual->dir = insertRecord(atual->dir, dado);

    return atual;
}

void Arvore::preOrdemRecorsive(NO *atual) {
    if (atual != nullptr) {
        cout << atual->dado.key << " ";
        preOrdemRecorsive(atual->esq);
        preOrdemRecorsive(atual->dir);
    }
}

void Arvore::centralRecorsive(NO *atual) {
    if (atual != nullptr) {
        centralRecorsive(atual->esq);
        cout << atual->dado.key << " ";
        centralRecorsive(atual->dir);
    }
}

void Arvore::posOrdemRecorsive(NO *atual) {
    if (atual != nullptr) {
        posOrdemRecorsive(atual->esq);
        posOrdemRecorsive(atual->dir);
        cout << atual->dado.key << " ";
    }
}

void Arvore::preOrdem() {
    preOrdemRecorsive(root);
}

void Arvore::central() {
    centralRecorsive(root);
}

void Arvore::posOrdem() {
    posOrdemRecorsive(root);
}

vector<int> tokenizar(string &text) {
    char del = ' ';

    stringstream sstream(text);
    string token;

    vector<int> tokens;

    while (getline(sstream, token, del)) {
        tokens.push_back(stoi(token));
    }
    return tokens;
}

int main() {
    _;

    string line;
    getline(cin, line);

    vector<int> vecR = tokenizar(line);

    Arvore root;

    for (auto &r : vecR) root.insert(r);

    root.preOrdem();
    cout << endl;
    root.central();
    cout << endl;
    root.posOrdem();
    cout << endl;

    return 0;
}