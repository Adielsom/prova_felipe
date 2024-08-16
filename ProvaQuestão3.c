#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// QUESTÃO 3

// ESTOU DECLARANDO AS FUNÇÕES

int num_digitos(unsigned long long num_cartao);
int dois_primeiros(unsigned long long num_cartao, int num_de_digitos);
int aplicar_algoritmo_luhn(unsigned long long num_cartao);
int valido(int resultado_algoritmo, int dois_primeiros_digitos, int num_de_digitos);

int main(void) {
    unsigned long long num_cartao;

    // COLOQUE O NUMERO DO CARTÃO
    printf("Numero: ");
    scanf("%llu", &num_cartao);

    // DETERMINO O NUMERO DE DIGITOS NO NUMERO DO CARTÃO
    int num_de_digitos = num_digitos(num_cartao);

    // PEGANDO OS 2 PRIMEIROS DIGITOS DO NUMERO DO CARTÃO
    int dois_primeiros_digitos = dois_primeiros(num_cartao, num_de_digitos);

    // APLICO O ALGORITMO DE LHUNM
    int resultado_algoritmo = aplicar_algoritmo_luhn(num_cartao);

    // VALIDA O NUMERO DO CARTÃO E DETERMINA O TIPO
    valido(resultado_algoritmo, dois_primeiros_digitos, num_de_digitos);

    return 0;
}

// FUNÇÃO PARA CONTAR O NUMERO DE DIGITOS NO NUMERO DO CARTÃO
int num_digitos(unsigned long long num_cartao) {
    int num_digitos = 0;
    while (num_cartao > 0) {
        num_cartao /= 10;
        num_digitos++;
    }
    return num_digitos;
}

// FUNÇÃO PARA PEGAR OS DOIS PRIMEIROS DIGITOS DO CARTÃO
int dois_primeiros(unsigned long long num_cartao, int num_de_digitos) {
    int dois_primeiros = num_cartao / pow(10, num_de_digitos - 2);
    return dois_primeiros;
}

// A FUNÇÃO PARA APLICAR O ALGORITMO DE LUHN
int aplicar_algoritmo_luhn(unsigned long long num_cartao) {
    int soma = 0;
    int posicao = 0;

    while (num_cartao > 0) {
        int digito = num_cartao % 10;

        // MULTIPLICANDO OS DIGITOS EM POSIÇÕES ALTERNADAS
        if (posicao % 2 == 1) {
            digito *= 2;
            if (digito > 9) {
                digito = (digito % 10) + (digito / 10);
            }
        }

        soma += digito;
        num_cartao /= 10;
        posicao++;
    }

    return soma;
}

// A FUNÇÃO PARA VERIFICAR O NUMERO DO CATÃO E IMPTIMIR O TIPO
int valido(int resultado_algoritmo, int dois_primeiros_digitos, int num_de_digitos) {
    if (resultado_algoritmo % 10 == 0) {
        if ((dois_primeiros_digitos == 34 || dois_primeiros_digitos == 37) && (num_de_digitos == 15)) {
            return printf("AMEX\n");
        } else if ((dois_primeiros_digitos >= 51 && dois_primeiros_digitos <= 55) && (num_de_digitos == 16)) {
            return printf("MASTERCARD\n");
        } else if ((dois_primeiros_digitos / 10 == 4) && (num_de_digitos == 13 || num_de_digitos == 16)) {
            return printf("VISA\n");
        } else {
            return printf("INVALIDO\n");
        }
    } else {
        return printf("INVALIDO\n");
    }
}

