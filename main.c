#include <stdio.h>
#include <stdlib.h>
//Questão 2

void multiplica_matrizes(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]);

int main()
{
    int n;

    //Lendo o tamanho da matriz
    printf("Digite o tamanho das matrizes (n x n) :\n");
    scanf("%d", &n);

    int matriz1[n][n], matriz2[n][n], resultado[n][n];

    //Lendo os elementos da primeira matriz
    printf("Digite os elementos da primeira matriz (%d x %d):\n", n,n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

// lendo os elementos da segunda matriz
    printf("Digite os elementos da segunda matriz (%d x %d):\n", n,n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

// Chamando as funçoes para multiplicar as matrizes
    multiplica_matrizes(n, matriz1, matriz2, resultado);

// Mostrando a matriz resultante

    printf("Resultado da multiplicacao das matrizes:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d",resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Implementação da função que multiplica duas matrizes

void multiplica_matrizes(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            resultado[i][j] = 0 ; //inicializa o elemento da matriz resultado
            for (int k = 0; k < n; k++){
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}
