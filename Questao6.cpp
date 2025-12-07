//Questao 6
/** Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está */

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsole_CP(CP_UTF8);

    int numers[8];
    int maior, menor;
    int poSmaior = 0;
    int poSmenor = 0;

    for(int i = 0; i < 8; i++) {
        std::cout << "Insira um numero: " << std::endl;
        std::cin >> numers[i];
    }

    maior = menor = numers[0];

    for(int i = 1; i < 8; i++) {
        //saber o maior numero
        if(numers[i] > maior) {
            maior = numers[i];
            poSmaior = i;
        }
        if(numers[i] < menor) {
            menor = numers[i];
            poSmenor = i;
        }
    }

    std::cout << "Maior Número: " << maior << "\n--" << "Posição no Vetor: " << poSmaior << std::endl;
    std::cout << "Menor Número: " << menor << "\n--" << "Posição no Vetor: " << poSmenor << std::endl;

    return 0;
}