//para a questao 1
#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, char* str) {    //recebe o arquivo f e uma string
    for (int i = 0; i < strlen(str); i++) {
        fputc(str[i], f); //bota os elementos da string no arquivo um a um
    }
}

int main(void) {
    FILE *arquivo;
    char texto[26];

    printf("Digite uma string (max 25 caracteres): ");
    fgets(texto, 26, stdin);

    arquivo = fopen("texto.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    escreva_string(arquivo, texto); //a função escreve a string no arquivo

    fclose(arquivo);
    printf("String gravada em 'texto.txt'!\n");
    return 0;
}

//para a questao 2

#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, char* str) {
    for (int i = 0; i < strlen(str); i++) {
        fputc(str[i], f);
    }
}

int main(void) {
    FILE* file = fopen("q4.txt", "w");
    if (file == NULL) {
        printf("Arquivo não criado\n");
        return 1;
    }

    char strings[10][26];    //10 strings, cada uma com até 25 caracteres + '\0', como se fosse 10 gavetas(linhas), e 26 colunas(as letras que formam as palavras dentro das gavetas)
    
    for (int i = 0; i < 10; i++) {   //leitura das 10 strings
        printf("Digite uma palavra (máx 25 caracteres): ");
        scanf("%25s", strings[i]);  // lê uma string e guarda em strings[i]
    }

    for (int i = 0; i < 10; i++) {
        escreva_string(file, strings[i]);
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Palavras gravadas em 'q4.txt'!\n");

    return 0;
}
