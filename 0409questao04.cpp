#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> pilha;
    string palavra, palavraInvertida = "";

    cout << "Digite uma palavra (sem espacos): ";
    cin >> palavra;

    for (int i = 0; i < palavra.length(); i++) {
        pilha.push(palavra[i]);
    }

    while (!pilha.empty()) {
        palavraInvertida += pilha.top();
        pilha.pop();
    }

    cout << "Palavra original: " << palavra << endl;
    cout << "Palavra invertida: " << palavraInvertida << endl;

    if (palavra == palavraInvertida) {
        cout << "\nResultado: E UM PALINDROMO!" << endl;
    } else {
        cout << "\nResultado: NAO e um palindromo." << endl;
    }

    return 0;
}