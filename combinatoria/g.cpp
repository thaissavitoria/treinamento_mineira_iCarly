#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void generateCombinations(vector<string>& elements, int k, int start, string result) {
    if (k == 0) {
        cout << result << endl;
        return;
    }

    for (int i = start; i <= elements.size() - k; ++i) {
        // Se for o último elemento a ser adicionado, não adicione uma vírgula
        string separator = (k == 1) ? "" : ",";
        generateCombinations(elements, k - 1, i + 1, result + elements[i] + separator);
    }
}

int main() {
    string input;
    cout << "Digite os elementos separados por vírgula (sem espaço): ";
    getline(cin, input);

    vector<string> elements;
    stringstream ss(input);
    string token;
    while (getline(ss, token, ',')) {
        elements.push_back(token);
    }

    cout << "Combinações possíveis:" << endl;
    for (int k = 1; k <= elements.size(); ++k) {
        generateCombinations(elements, k, 0, "");
    }

    return 0;
}