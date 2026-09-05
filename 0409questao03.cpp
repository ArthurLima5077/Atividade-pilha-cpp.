#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> pilha;
    string texto;

    cout << "Digite uma palavra ou frase: ";
    getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {
        pilha.push(texto[i]);
    }

    cout << "Saida invertida: ";
    
    while (!pilha.empty()) {
        cout << pilha.top();
        pilha.pop();
    }
    cout << endl;

    return 0;
}
// O comportamento LIFO (Last-In, First-Out - Último a Entrar, Primeiro a Sair) é perfeito para inversões.
// Quando você lê a palavra "ESTRUTURA" da esquerda para a direita, a letra 'A' é a última a ser colocada na pilha. Sendo a última a entrar,
// pela regra do LIFO, ela obrigatoriamente será a primeira a ser retirada e mostrada na tela, invertendo naturalmente a ordem de tudo o que foi guardado.
