#include <stdio.h>
#include <string.h>

// QUESTÃO 5
int main() {

    // ARRAYS DE PONTUAÇÃO E LETRAS

    int pontuacao[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char letras[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // STRINGS PARA OS NOMES E VARIAVEIS DE PONTUAÇÃO

    char nome1[100];
    char nome2[100];
    int pontuacao1 = 0;
    int pontuacao2 = 0;

    // ENTRADA DOS NOMES DOS JOGADORES

    printf("Digite o primeiro nome:\n");
    scanf("%s", nome1);

    printf("Digite o segundo nome:\n");
    scanf("%s", nome2);

    // CALCULO DA PONTUAÇÃO PARA O PRIMEIRO NOME E SEGUNDO NOME

    for (int i = 0; i < strlen(nome1); i++) {
        for (int j = 0; j < 26; j++) {
            if (nome1[i] == letras[j]) {
                pontuacao1 += pontuacao[j];
                break; // ENCERRA O LOOP INTERNO APÓS ENCONTRAR A LETRA CORRESPONDENTE
            }
        }
    }


    for (int i = 0; i < strlen(nome2); i++) {
        for (int j = 0; j < 26; j++) {
            if (nome2[i] == letras[j]) {
                pontuacao2 += pontuacao[j];
                break;
            }
        }
    }

    // EXIBE AS PONTUAÇÕES DOS JOGADORES

    printf("Jogador 1: %d\n", pontuacao1);
    printf("Jogador 2: %d\n", pontuacao2);

    // DETERMINA E EXIBE O VENCEDOR

    if (pontuacao1 > pontuacao2){
        printf("Jogador 1 venceu!\n");
    }else if (pontuacao2 > pontuacao1){
        printf("Jogador 2 venceu!\n");
    }else{
        printf("Empate!\n");
    }

    return 0;
}
