#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Função auxiliar para checar se o par de abertura e fechamento combinam
bool formamPar(char abertura, char fechamento) {
    if (abertura == '(' && fechamento == ')') return true;
    if (abertura == '[' && fechamento == ']') return true;
    if (abertura == '{' && fechamento == '}') return true;
    return false;
}

int main() {
    stack<char> pilha;
    string expressao;
    bool valida = true;

    cout << "Digite a expressao matematica: ";
    cin >> expressao; // Lê a expressão sem espaços

    for (int i = 0; i < expressao.length(); i++) {
        char atual = expressao[i];

        // Se for abertura, coloca na pilha
        if (atual == '(' || atual == '[' || atual == '{') {
            pilha.push(atual);
        }
        // Se for fechamento, verifica a pilha
        else if (atual == ')' || atual == ']' || atual == '}') {
            // Se a pilha tá vazia ou não faz par, expressão inválida
            if (pilha.empty() || !formamPar(pilha.top(), atual)) {
                valida = false;
                break; // Pode parar a verificação, já deu erro
            } else {
                pilha.pop(); // Fez par certinho, então tira o correspondente da pilha
            }
        }
    }

    // Se no final o loop terminou mas a pilha não está vazia (sobrou alguém aberto)
    if (!pilha.empty()) {
        valida = false;
    }

    cout << "\nExpressao: " << expressao << endl;
    if (valida) {
        cout << "Resultado: VALIDA (Balanceamento correto)" << endl;
    } else {
        cout << "Resultado: INVALIDA (Problema nos (), [] ou {})" << endl;
    }

    return 0;
}