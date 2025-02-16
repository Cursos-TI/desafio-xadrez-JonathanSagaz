#include <stdio.h>  

int movimentarBispo(int movimentos) {
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }
    printf("\n"); // Separação visual
    return movimentos;  // Retorna o número total de movimentos
}

int movimentarTorre(int movimentos) {
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Separação visual
    return movimentos;  // Retorna o número total de movimentos
}

int movimentarRainha(int movimentos) {
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Esquerda\n");
    }
    printf("\n"); // Separação visual
    return movimentos;  // Retorna o número total de movimentos
}

int main() {
    // Uso de constantes (const) para definir o número de movimentos das peças
    const int BISPO_MOVIMENTOS = 5;
    const int TORRE_MOVIMENTOS = 5;
    const int RAINHA_MOVIMENTOS = 8;

    // Chamando funções e armazenando seus retornos
    int totalBispo = movimentarBispo(BISPO_MOVIMENTOS);
    int totalTorre = movimentarTorre(TORRE_MOVIMENTOS);
    int totalRainha = movimentarRainha(RAINHA_MOVIMENTOS);

    // Exibindo o total de movimentos realizados por cada peça
    printf("Total de movimentos do Bispo: %d\n", totalBispo);
    printf("Total de movimentos da Torre: %d\n", totalTorre);
    printf("Total de movimentos da Rainha: %d\n", totalRainha);

    return 0; // Indica que o programa terminou corretamente
}