#include <stdio.h>
//Iniciei com as recursividades
void recursivo(int casas){
    if (casas > 0){
        printf("Direita\n", casas);

        recursivo(casas - 1);
    }
// Recursivo com loop aninhado para o movimento vertical e horizontal do bispo
} void recursivo1(int casas1){
    if (casas1 > 0){
        for (int bispoMVE = 0; bispoMVE < 1; bispoMVE++) {
            for (int bispoMVD = 0; bispoMVD < 1; bispoMVD++) {
                printf("Direita\n");
            }
            printf("Cima\n");
        }
    }
     
} void recursivo2(int casas2){
    if (casas2 > 0){
        printf("Esquerda\n", casas2);

        recursivo2(casas2 - 1);
        
    }
}  
    
//Inicio da impressão

int main() {

    printf("Movimentos da torre: \n");
    // Mover a torre 5 casas para a direita
    
    recursivo(5);

    printf("Movimentos do bispo: \n");
    // Mover o bispo 5 casas para a direita
 
    recursivo1(5);

    printf("Movimentos da Rainha: \n");
    // Mover a rainha 8 casas para a direita

    recursivo2(8);

    printf("Movimentos do Cavalo: \n");
    // Mover o cavalo em L com loops complexos
   
    for (int movimentoL = 0; movimentoL < 1; movimentoL++) {
        for (int movimento = 0; movimento < 2; movimento++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    
        return 0;
    }