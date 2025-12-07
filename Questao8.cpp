//Questao 8
/** Crie um vetor de 6 nomes (strings).
    O programa deve:
    Ler os nomes
    Perguntar um nome a ser buscado
    Informar se ele existe no vetor */

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string nomes[3];
    string nom_comp;

    //for com getline(cin, nomes[i]) para pegar os nomes
    for(int i = 0; i<3; i++) {
        cout << "Digite um nome" << endl;
        getline(cin, nomes[i]);
    }

    cout << "Digite o nome a ser buscado " << endl;
    cin >> nom_comp;
    for(int i = 0; i < 3; i++) {
        if(nom_comp == nomes[i]){
            cout << "Esse nome existe no vetor" << endl;
            break;
        }
        else {
            cout << "Esse nome não existe no vetor ou você digitou errado" << endl;
            break;
        }
    }

    return 0;
}