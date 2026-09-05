#include <iostream>

using namespace std;

const int TAM = 10;
int pilha[TAM];
int topo = -1;

bool estaVazia() {
    return topo == -1;
}

bool estaCheia() {
    return topo == TAM - 1;
}

void empilhar(int valor) {
    if (estaCheia()) {
        cout << "Erro: A pilha esta cheia! Nao e possivel inserir o valor " << valor << "." << endl;
        return;
    }
    topo++;
    pilha[topo] = valor;
    cout << "Empilhando: " << valor << endl;
}

void desempilhar() {
    if (estaVazia()) {
        cout << "Erro: A pilha esta vazia! Nao ha o que remover." << endl;
        return;
    }
    cout << "Desempilhando: " << pilha[topo] << endl;
    topo--;
}

void consultarTopo() {
    if (estaVazia()) {
        cout << "A pilha esta vazia! Nao ha elemento no topo." << endl;
        return;
    }
    cout << "Elemento no topo: " << pilha[topo] << endl;
}

void exibirPilha() {
    if (estaVazia()) {
        cout << "Pilha vazia!" << endl;
        return;
    }
    cout << "--- Elementos na Pilha ---" << endl;
    for (int i = topo; i >= 0; i--) {
        cout << pilha[i] << endl;
    }
    cout << "--------------------------" << endl;
}

int main() {
    empilhar(5);
    empilhar(15);
    empilhar(25);
    
    exibirPilha();
    consultarTopo();
    
    desempilhar();
    exibirPilha();
    
    return 0;
}