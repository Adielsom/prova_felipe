#include <stdio.h>
#include <math.h>

// QUESTÃO 04

int main(void) {


    int centavos;
    int quantidade = 0; // VARIAVEL PARA ARMAZENAR O NUMERO TOTAL DE MOEDAS
    int qatd25 = 0; // VARIAVEL PARA ARMAZENAR A QUANTIDADE DE MOEDAS DE 25 CENTAVOS
    int qatd10 =0 ; // VARIAVEL PARA ARMAZENAR A QUANTIDADE DE MOEDAS DE 10 CENTAVOS
    int qatd5 = 0; // VARIAVEL PARA ARMAZENAR A QUANTIDADE DE MOEDAS DE 5 CENTAVOS
    int qatd1 = 0; // VARIAVEL PARA ARMAZENAR A QUANTIDADE DE MOEDAS DE 1 CENTAVO

    // SOLICITA AO USUARIO QUE INSIRA O VALOR DO TROCO EM CANTAVOS

    printf("Digite qual troco deve ser:\n");
    scanf("%d", &centavos);

    // LOOP PARA CALCULAR O NUMERO DE MOEDAS DE 25 CENTAVOS

  while(centavos >= 25){
    centavos / 25;
    centavos -= 25; // SUBTRAI 25 CENTAVOS DO TOTAL
    quantidade++;   // INCREMENTA O NUMERO TOTAL DE MOEDAS
    qatd25++;        // INCREMENTA O CONTADOR DE MOEDAS DE 25 CENTAVOS
    }

    // LOOP PARA CALCULAR O NUMERO DE MOEDAS DE 10 CENTAVOS

    while(centavos >= 10){
    centavos / 10;
    centavos -= 10; // SUBTRAI 10 CENTAVOS DO TOTAL
    quantidade++;  // INCREMENTA O NUMERO TOTAL DE MOEDAS
    qatd10++;     // INCREMENTA O CONTADOR DE MOEDAS DE 10 CENTAVO
  }

   // LOOP PARA CALCULAR O NUMERO DE MOEDAS DE 5 CENTAVOS

    while(centavos >= 5){
    centavos / 5;
    centavos -=5 ; // SUBTRAI 5 CENTAVOS DO TOTAL
    quantidade++; // INCREMENTA O NUMERO TOTAL DE MOEDAS
    qatd5++;      // INCREMENTA O CONTADOR DE MOEDAS DE 5 CENTAVO
  }

  // LOOP PARA CALCULAR O NUMERO DE MOEDAS DE 1 CENTAVOS

    while(centavos >= 1){
    centavos / 1;
    centavos -= 1; // SUBTRAI 1 CENTAVOS DO TOTAL
    quantidade++; // INCREMENTA O NUMERO TOTAL DE MOEDAS
    qatd1++;    // INCREMENTA O CONTADOR DE MOEDAS DE 1 CENTAVO
  }

  // EXIBE O NUMERO TOTAL DE MOEDAS

  printf("Quantidade de moedas: %d;\n", quantidade);

  // EXIBE A QUANTIDADE DE MOEDAS DE 25 CENTAVOS, SE TIVER

  if(qatd25>0){
    printf("moedas de 25: %d\n", qatd25);
  }
  // EXIBE A QUANTIDADE DE MOEDAS DE 10 CENTAVOS, SE TIVER
  if(qatd10>0){
    printf("moedas de 10: %d\n", qatd10);
  }
  // EXIBE A QUANTIDADE DE MOEDAS DE 5 CENTAVOS, SE TIVER
  if(qatd5>0){
    printf("moedas de 5: %d\n", qatd5);
  }
  // EXIBE A QUANTIDADE DE MOEDAS DE 1 CENTAVOS, SE TIVER
  if(qatd1>0){
    printf("moedas de 1: %d\n", qatd1);
  }

    return 0;
}
