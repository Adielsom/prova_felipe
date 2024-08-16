#include <stdio.h>
#include <string.h>
#include <ctype.h>

// QUESTÃO 7

int main() {
    char palavra[100];  // VETOR PARA ARMAZENAR A PALAVRA QUE VAI SER CRIPTOGRAFADA 
    char criptografada[100]; // VETOR PARA ARMAZENAAR A PALAVRA CRIPTOGRAFADA
    int i; // INDICE PARA PERCORRER AS LETRAS DA PALAVRA
    int deslocamento; // VALOR DO DESLOCAMENTO PARA A CIFRA DE CÉSAR 

    // PEDINDO AO USUARIO QUE DIGITE UMA PALAVRA 
    
    printf("Digite uma palavra para ser criptografada:\n");
    scanf("%s", palavra);

    // PEDINDO AO USUARIO QUE FALE QUAL VAI SER O DESLOCAMENT0
    
    printf("Digite o valor do deslocamento:\n");
    scanf("%d", &deslocamento);

    // GARANTE QUE O DESLOCAMENTO ESTEJA DENTRI DO INTERVALO DE 0 A 25
    
    deslocamento = deslocamento % 26;

     // LOOP PARA PERCORRER CADA LETRA DA PALAVRA 

    for (i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];
        
    // VERIFICA SE O CARACTERE É UMA LETRA DO ALFABETO 
    
        if (isalpha(letra)) {
            char base = islower(letra) ? 'a' : 'A';
            criptografada[i] = (letra - base + deslocamento) % 26 + base;
        } else {
            // APLICA A CIFRA DE CÉSAR: DESLOCA A LETRA DENTRO DO ALFABETO 
            criptografada[i] = letra;
        }
    }

    // ADICIONA O CARACTERE NULO AO FINAL DA STRING CRIPTOGRAFADA PARA INDICAR O FINAL DA STTRING
    
    criptografada[i] = '\0';
    
    // EXIBE A PALAVRA CRIPTOGRAFADA

    printf("Palavra criptografada: %s\n", criptografada);

    return 0;
}
