#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    cout << "Digite 5 numeros inteiros para empilhar:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        pilha.push(numero);
    }
    cout << "\n-----------------------------------" << endl;

    cout << "Elemento que esta no topo: " << pilha.top() << endl;

    cout << "Quantidade de elementos na pilha: " << pilha.size() << endl;

    pilha.pop();
    cout << "--> Removendo o elemento do topo" << endl;

    if (!pilha.empty()) {
        cout << "Novo elemento no topo: " << pilha.top() << endl;
    } else {
        cout << "A pilha esta vazia!" << endl;
    }
    return 0;
}
//O último número inserido foi o primeiro a ser removido por causa do princípio fundamental de funcionamento de uma Pilha (Stack), 
//conhecido pela sigla LIFO (Last-In, First-Out), que em português chamamos de UEPS (Último a Entrar, Primeiro a Sair)