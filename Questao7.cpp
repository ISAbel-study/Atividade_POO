//Questao 7
/** Crie um vetor com 10 números digitados pelo usuário.
    Depois peça um número X e informe:
    Se X está no vetor
    Em qual posição ele aparece pela primeira vez */

//caso eu coloque numeros repetidos no VETOR 
//ent a vrificacao ocorre...
//na hora que vejo ele, uma ramificacao na hora que ele aparece
//tipo vi voce, achei voce, bora ver um negocio aqui..

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[10];
    int num_dan;
    int num_pos;
    int cont;

    for(int i = 0; i < 10; i++) {
        std::cout << "Digite um número: " << std::endl;
        std::cin >> nums[i];
    }

    std::cout << "Digite um número aleatório: " << std::endl;
    std::cin >> num_dan;//guardado para fazer comparacao
    //for para percorrer o vetor e fazer a verificação
    for(int i = 0; i < 10; i++) {
        if(num_dan == nums[i]){ //compara o numero digitado com o que esta no vetor
            std::cout << "O número " << num_dan << " está no vetor" << ", na posição: " << nums[i] << std::endl;
            cont = i;
            if(cont < nums[i]) {
                std::cout << "O numero já apareceu na posição " << cont << std::endl;
            }
            break;
        }
        else {
            std::cout << "O numero nao foi encontrado no vetor" << std::endl;
            break;
        }
    }


    return 0;
}