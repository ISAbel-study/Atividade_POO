//Questao 5
/** Usando o vetor do exercício anterior, calcule e exiba:
    A soma total dos números
    A média aritmética dos valores */

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsole_CP(CP_UTF8);

    int numers[5];
    int soma = 0;
    float media;

    for(int i = 0; i < 5; i++) {
        std::cout << "Insira um numero: " << std::endl;
        std::cin >> numers[i];
        soma += numers[i];//variavel soma pega o valor do vetor e soma
    }

    media = (float)soma / 5;//já que a quant de numero é fixa, ent coloquei 5 direto

    std::cout << "Soma Total dos valores: " << soma << std::endl;
    std::cout << "Média Aritmética dos valores : " << media << std::endl;

    return 0;
}
