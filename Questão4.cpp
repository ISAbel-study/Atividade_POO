//Questao 4
/** Crie um programa que:
    Possua um vetor de 5 números inteiros
    Peça ao usuário para digitar os valores
    Exiba todos os valores digitados */
    
#include <iostream>
#include <windows.h>

int main() {
    
    int numers[5];

    for(int i = 0; i < 5; i++) {
        std::cout << "Insira um numero: " << std::endl;
        std::cin >> numers[i]; 
    }

    for(int i = 0; i < 5; i++) {
        std::cout << "Os numeros digitados foram: " << std::endl;
        std::cout << "Posição " << i+1 << ": " << numers[i] << std::endl;
    }

    return 0;
}

