#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita (usando for)
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando while)
    int movimentosBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha - 8 casas para a esquerda (usando do-while)
    int movimentosRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}
