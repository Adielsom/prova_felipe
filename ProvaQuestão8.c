#include <stdio.h>
#include <math.h>

// QUESTÃO 8

int main() {
    int largura, comprimento, percentual;

    while (1) {

        // AQUI LER AS ENTRADAS

        scanf("%d %d %d", &largura, &comprimento, &percentual);

        // AQUI SE QUALQUER UM DOS VALORES FOR ZERO, ELE INTERRIMPE O LOOP

        if (largura == 0 || comprimento == 0 || percentual == 0) break;

        // CALCULA A AREA DA CASA

        int areaCasa = largura * comprimento;

        // CALCULA A AREA DO TERRENO NECESSARIO

        double areaTerreno = areaCasa / (percentual / 100.0);

        // ENCONTRA O LADO DO TERRENO, ARREDONDANDO PARA CIMA

        int ladoFinal = (int)ceil(sqrt(areaTerreno));

        // IMPRIME O RESULTANDO, O QUAL ERA PARA SER 20, 3 E 5, POREM MEU ALGORITMO NÃO FAZ ESSA CONTA E ELE SEMPRE ARREDONDA POR CONTA DOS NUMEROS QUEBRADOS

        printf("%d\n", ladoFinal);
    }

    return 0;
}
