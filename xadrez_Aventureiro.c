#include <stdio.h>

int main() {

    printf("Movimentos da torre: \n");
    // Mover a torre 5 casas para a direita
    for (int numero1 = 0; numero1 < 5; numero1++){
        printf("Direita\n");
    }

    int numero2 = 0;
    printf("Movimentos do Bispo: \n");
    // Mover o bispo 5 casas para a diagonal
    while (numero2 < 5) 
    {
        printf("Cima, Direita\n");
        numero2++;
    }

    int numero3 = 0;
    printf("Movimentos da Rainha: \n");
    // Mover a rainha 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        numero3++;

    } while (numero3 < 8);
        
    int MovimentoL = 0;
    printf("Movimentos do Cavalo: \n");
    //Mover o cavalo em L
    do {
        for (int numero4 = 0; numero4 < 2; numero4++) {
             printf("Baixo\n");
        }
        printf("Esquerda\n");
     } while  (MovimentoL--); 
        

     
    return 0;
}