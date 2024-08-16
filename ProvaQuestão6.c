#include <stdio.h>
#include <string.h>
#include <ctype.h>

// QUESTÃO 6

int main() {

    // VETOR 'CHAVE' QUE REPRESENTA A SUBSTITUIÇÃO DE CADA LETRA DO ALFABETO PARA CRIPTOGRAFAR A PALAVRA 
    
    char chave[] = {'n','q','x','p','o','m','a','f','t','r','h','l','z','g','e','c','y','j','i','u','w','s','k','d','v','b'};
    
    
    // VETOR 'ALFABETO' COM AS LETRAS EM ORDEM
    
    char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    // VETOR PARA ARMAZENAR A PALVRA QUE SERÁ CRIPTOGRAFADA 
    
    char palavra[100];
    
    // VETOR PARA ARMAZENAR A PALAVRA CRIPTOGRAFADA 
    
    char incriptada[100];
    
    int i, j;

    // DIGITAR A PALAVRA CRIPTOGRAFADA 
    
    printf("Digite uma palavra para ser criptografada:\n");
    scanf("%s", palavra);

     // LOOP PARA PERCORRER CADA LETRA DA PALAVRA 
    
    for (i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];
        int encontrado = 0;

        // LOOP PARA PROCURAR A LETRA NO ALFABETO 
        
        for (j = 0; j < 26; j++) {
            if (tolower(letra) == alfabeto[j]) {
                incriptada[i] = isupper(letra) ? toupper(chave[j]) : chave[j];
                encontrado = 1;
                break;
            }
        }

        // SE A LETRA NÃO FOI ENCONTRADA NO ALFABETO (POR EXEMPLO, UM NUMERO OU SIMBOLO), ELA PERMANECE INALTERADA
        
        if (!encontrado) {
            incriptada[i] = letra;
        }
    }

    // ADICIONE O CARACTERE NULO AO FINAL DA STRING CRIPTOGRAFADA PARA INDICAR O FINAL DA STRING

    incriptada[i] = '\0';

    // EXIBE A PALAVRA CRIPTOGRAFADA
    
    printf("Palavra digitada criptografada: %s\n", incriptada);

    return 0;
}
