#include <stdio.h>
#include <string.h>

// QUESTÃO 9

int main()
{
    // LÊ O NÚMERO DE CASOS DE TESTE
    
    int numCasos;
    scanf("%d", &numCasos);

    // LOOP PARA PROCESSAR CADA CASO DE TESTE
    
    for (int caso = 1; caso <= numCasos; caso++) {
        char escolhaSheldon[10], escolhaRaj[10], resultado[15];
        scanf("%s %s", escolhaSheldon, escolhaRaj);

        // VERIFICAR A VITÓRIA DE SHELDON COM BASE NAS REGRAS DO JOGO
        
        if ((strcmp(escolhaSheldon, "tesoura") == 0 && (strcmp(escolhaRaj, "papel") == 0 || strcmp(escolhaRaj, "lagarto") == 0)) ||
            (strcmp(escolhaSheldon, "papel") == 0 && (strcmp(escolhaRaj, "pedra") == 0 || strcmp(escolhaRaj, "Spock") == 0)) ||
            (strcmp(escolhaSheldon, "pedra") == 0 && (strcmp(escolhaRaj, "lagarto") == 0 || strcmp(escolhaRaj, "tesoura") == 0)) ||
            (strcmp(escolhaSheldon, "lagarto") == 0 && (strcmp(escolhaRaj, "Spock") == 0 || strcmp(escolhaRaj, "papel") == 0)) ||
            (strcmp(escolhaSheldon, "Spock") == 0 && (strcmp(escolhaRaj, "tesoura") == 0 || strcmp(escolhaRaj, "pedra") == 0))) {
            // Sheldon vence de acordo com as regras do jogo
            strcpy(resultado, "Bazinga!");
        } else if (strcmp(escolhaSheldon, escolhaRaj) == 0) {
            // Empate, pois as escolhas são iguais
            strcpy(resultado, "De novo!");
        } else {
            // Caso contrário, Raj vence
            strcpy(resultado, "Raj trapaceou!");
        }

        // IMPRIME O RESULTADO DO CASO ATUAL NO FORMATO ESPECIFICADO
        
        printf("Caso #%d: %s\n", caso, resultado);
    }

    return 0;
}
