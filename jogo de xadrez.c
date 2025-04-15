#include <stdio.h>

int main(){
int i = 1; 
int j = 1; // Inicializa a variável j com 1 p/ rainha
     // Inicializa a variável i com 1 p/ bispo
// while para bispo,  do while rainha, e for torre.

for ( int i = 0; i < 5; i++){
    printf("Movimento Vertical torre Direita\n"); // imprime a direcao do movimento da torre
}

while (i <= 5) { // Enquanto i for menor ou igual a 5, o loop continua
    printf("Diagonal cima direita Bispo\n"); // imprime a direcao do movimento do bispo
    i++; // Incrementa i em 1 a cada iteração " i++ o que ele faz pega o valor de i e incrementa + 1"

 }
    

    do {
        printf("Movimento para esquerda, rainha\n", i); // imprime a direcao do movimento da rainha
        j++; // Incrementa i em 1 a cada iteração " i++ o que ele faz pega o valor de i e incrementa + 1"
    } while (j <= 8); // O loop do-while executa enquanto a condição for verdadeira

    return 0;
}
