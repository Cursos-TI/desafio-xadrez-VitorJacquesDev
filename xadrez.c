#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código implementa o sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções recursivas para o Nível Mestre
void moverBispoRecursivo(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Movimento do bispo (diagonal superior direita)
    printf("Cima\n");
    printf("Direita\n");
    
    // Chamada recursiva para mover o bispo mais uma casa
    moverBispoRecursivo(casasRestantes - 1);
}

void moverTorreRecursiva(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Movimento da torre (para a direita)
    printf("Direita\n");
    
    // Chamada recursiva para mover a torre mais uma casa
    moverTorreRecursiva(casasRestantes - 1);
}

void moverRainhaRecursiva(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Movimento da rainha (para a esquerda)
    printf("Esquerda\n");
    
    // Chamada recursiva para mover a rainha mais uma casa
    moverRainhaRecursiva(casasRestantes - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração de constantes para o número de casas que cada peça pode se mover
    const int CASAS_BISPO = 5;  // 5 casas na diagonal superior direita
    const int CASAS_TORRE = 5;  // 5 casas para a direita
    const int CASAS_RAINHA = 8; // 8 casas para a esquerda
    
    printf("\n===== NÍVEL NOVATO =====\n");
    
    // Implementação de Movimentação do Bispo (usando for)
    printf("\nMovimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
        printf("Cima\n");     // Movimento para cima
        printf("Direita\n");  // Movimento para direita
    }
    
    // Implementação de Movimentação da Torre (usando while)
    printf("\nMovimentação da Torre (5 casas para a direita):\n");
    int contadorTorre = 0;
    while (contadorTorre < CASAS_TORRE) {
        printf("Direita\n");
        contadorTorre++;
    }
    
    // Implementação de Movimentação da Rainha (usando do-while)
    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < CASAS_RAINHA);
    
    // Nível Aventureiro - Movimentação do Cavalo
    printf("\n===== NÍVEL AVENTUREIRO =====\n");
    printf("\nMovimentação do Cavalo (em L para baixo e para a esquerda):\n");
    
    // Utilizando loops aninhados (for e while) para simular a movimentação do Cavalo em L
    // O cavalo se move 2 casas para baixo e 1 para a esquerda
    for (int vertical = 0; vertical < 2; vertical++) {
        printf("Baixo\n"); // Movimento para baixo
    }
    
    int horizontal = 0;
    while (horizontal < 1) {
        printf("Esquerda\n"); // Movimento para a esquerda
        horizontal++;
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("\n===== NÍVEL MESTRE =====\n");
    
    // Implementação de Movimentação do Bispo usando função recursiva
    printf("\nMovimentação do Bispo Recursivo (5 casas na diagonal direita para cima):\n");
    moverBispoRecursivo(CASAS_BISPO);
    
    // Implementação de Movimentação da Torre usando função recursiva
    printf("\nMovimentação da Torre Recursiva (5 casas para a direita):\n");
    moverTorreRecursiva(CASAS_TORRE);
    
    // Implementação de Movimentação da Rainha usando função recursiva
    printf("\nMovimentação da Rainha Recursiva (8 casas para a esquerda):\n");
    moverRainhaRecursiva(CASAS_RAINHA);
    
    // Implementação de Movimentação do Cavalo usando loops com variáveis múltiplas e condições avançadas
    printf("\nMovimentação do Cavalo Avançado (em L para cima à direita):\n");
    
    // Variáveis para controlar a movimentação do cavalo
    int passoVertical = 0;
    int passoHorizontal = 0;
    int totalPassos = 3; // Total de passos (2 verticais + 1 horizontal)
    
    // Loop com variáveis múltiplas e condições avançadas
    for (int passo = 0; passo < totalPassos; passo++) {
        // Se já completou os 2 passos verticais, pula para o passo horizontal
        if (passoVertical >= 2) {
            if (passoHorizontal >= 1) {
                break; // Sai do loop se já completou todos os passos
            }
            printf("Direita\n"); // Movimento para direita
            passoHorizontal++;
            continue; // Pula para a próxima iteração
        }
        
        printf("Cima\n"); // Movimento para cima
        passoVertical++;
    }
    
    printf("\nDesafio de Xadrez Concluído!\n");
    
    return 0;
}
