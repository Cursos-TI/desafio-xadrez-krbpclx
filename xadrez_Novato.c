#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    printf("Movimentos da torre: \n");
    // Mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++){
        printf("Direita\n");
    }

    
    int numero1 = 0;
    printf("Movimentos do Bispo: \n");
    // Mover o bispo 5 casas para a diagonal
    while (numero1 < 5) 
    {
        printf("Cima, Direita\n");
        numero1++;
    }

    int numero2 = 0;
    printf("Movimentos da Rainha: \n");
    // Mover a rainha 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        numero2++;

    } while (numero2 < 8);
        
        

    return 0;
}