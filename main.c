#include <stdio.h>
#include <stdlib.h>

int soma_array(int array[], int tamanho);

int main()
{
 // Questão 1 - Arrays

 //Calculando as somas de um elemento de um array

 int n;

 // Lendo o tamanho do array
 printf("Digite o tamanho do array: \n");
 scanf("%d", &n);

 int array[n];

 //Lendo os elementos do array

 printf("Digite %d numeros inteiros:\n", n);
 for (int i = 0; i < n; i++){
    scanf("%d", &array[i]);
 }

 // calculando a soma ultilizando a função soma_array

 int soma = soma_array(array, n);

 // Exibindo a soma dos elementos do array

 printf("A soma dos elementos do array e: %d\n", soma);
    return 0;
}

//Implementação da função

int soma_array(int array[], int tamanho){
    int soma = 0;
    for (int  i = 0; i < tamanho; i++){
        soma += array[i];
    }

    return soma;
}

