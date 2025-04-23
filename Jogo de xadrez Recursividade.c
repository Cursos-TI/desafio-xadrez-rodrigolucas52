#include <stdio.h>

void MoverTorre(int casas) {
    if (casas > 0) {
        printf("Movimento Horizontal Torre Direita\n");
        MoverTorre(casas - 1); // Chama a função recursivamente com casas - 1
    }
}

void MoverBispo(int casas) {    
for (int i = 0; i < casas; i++) {
        printf("Diagonal cima direita Bispo\n"); // Imprime a direção do movimento do bispo
    }
}

void MoverRainha(int casas) {
while (casas > 0) {
        printf("Movimento para esquerda, Rainha\n"); // Imprime a direção do movimento da rainha
        casas--; // Decrementa o número de casas restantes
    }
}

void MoverCavalo() {
    for (int i = 0; i < 1; i++) {
        int j = 0; // Inicializa j para controlar o número de movimentos do cavalo
        while (j < 2) { // O cavalo se move duas casas para baixo
            printf("Cavalo para cima\n"); // Imprime a direção do movimento do cavalo
            j++; // Incrementa j em 1 a cada iteração
        }
    }  printf("Cavalo para direita\n"); // Imprime a direção do movimento do cavalo
    
}


int main(){
    MoverTorre(5); // Chama a função MoverTorre com 5 casas
    printf("\n"); // Imprime uma nova linha para separar os movimentos

    MoverBispo(5); // Chama a função MoverBispo com 5 casas
    printf("\n"); // Imprime uma nova linha para separar os movimentos

    MoverRainha(8); // Chama a função MoverRainha com 8 casas
    printf("\n"); // Imprime uma nova linha para separar os movimentos

    MoverCavalo(2); // Chama a função MoverCavalo com 2 movimentos 
    printf("\n"); // Imprime uma nova linha para separar os movimentos

  
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso

}