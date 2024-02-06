#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int countInsertion(string &str) {
    int comparacao = 0;

    for (int i = 1; i < str.length(); ++i) {
        char currentChar = str[i];
        int j = i - 1;

        while (j >= 0 && str[j] > currentChar) {
            comparacao++;
            str[j + 1] = str[j];
            j--;
        }

        comparacao++; 
        str[j + 1] = currentChar;
    }

    return comparacao;
}

int main() {
    _;
    
    int t;
    cin >> t;

    for (int testCase = 0; testCase < t; ++testCase) {
        string str;
        cin >> str;

        int TOTALcomparacao = countInsertion(str);
        cout << TOTALcomparacao << endl;
    }

    return 0;
}