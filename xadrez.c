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

    // Movimento do Cavalo - duas casas para baixo e uma para a esquerda
    // Usando for e while aninhados
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;
    int i;

    printf("\nMovimento do Cavalo:\n");

    for (i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
