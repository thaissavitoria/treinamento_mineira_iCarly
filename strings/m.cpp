#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


bool validarEmail(const string& email) {
    size_t pos = email.find('@');

    if (pos == string::npos || pos == 0 || pos == email.length() - 1) {
        return false; 
    }

    string username = email.substr(0, pos);
    string domain = email.substr(pos + 1);

    for (char c : username) {
        if (!isalnum(c) && c != '.' && c != '_') {
            return false; 
        }
    }

    
    for (char c : domain) {
        if (!islower(c) && c != '.') {
            return false; 
        }
    }

    if (domain.back() == '.') {
        return false;
    }

    return true; 
}

int main() {
    string input;
    cin >> input;

    if (validarEmail(input)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}