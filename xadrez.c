#include <stdio.h>

// Função recursiva para a Torre (movimento horizontal para a direita)
void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha (movimento horizontal para a esquerda)
void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo (diagonal: cima e direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0)
        return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Bispo com loops aninhados: externo = vertical, interno = horizontal
void moverBispoComLoops(int movimentosVerticais, int movimentosHorizontais) {
    printf("\nMovimento do Bispo com Loops:\n");
    for (int i = 0; i < movimentosVerticais; i++) {
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (i == j) {
                printf("Cima Direita\n");
            }
        }
    }
}

// Movimento do Cavalo: duas casas para cima, uma para a direita
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < movimentosVerticais + 1; i++) {
        if (i >= movimentosVerticais)
            break;
        printf("Cima\n");

        for (int j = 0; j < movimentosHorizontais + 1; j++) {
            if (j >= movimentosHorizontais)
                continue;
            printf("Direita\n");
            break; // após um movimento para direita, termina o movimento em "L"
        }
    }
}

int main() {
    // Movimento da Torre usando recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo com recursão
    printf("\nMovimento do Bispo com Recursividade:\n");
    moverBispoRecursivo(5);

    // Movimento da Rainha usando recursão
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo com loops aninhados e lógica condicional
    moverCavalo();

    // Movimento do Bispo com loops aninhados (extra)
    moverBispoComLoops(5, 5);

    return 0;
}
