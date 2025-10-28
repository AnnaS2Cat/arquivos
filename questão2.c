#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *arquivo;            //ponteiro para o arquivo
    char texto[26];           
    int i = 0;                
    char c;                   //variável que armazena cada caractere lido

    arquivo = fopen("texto.txt", "r"); //abre o arquivo para leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Lê o arquivo caractere por caractere até o final (EOF)
    while ((c = fgetc(arquivo)) != EOF && i < 25) {           //fgetc(arquivo) lê um caractere do arquivo e armazena em c caso o arquivo não chegue ao final e o i<25
        texto[i] = c;   //armazena o caractere na string
        i++;           
    }

    texto[i] = '\0'; // Finaliza a string com o caractere nulo
    fclose(arquivo);
    printf("String lida do arquivo: %s\n", texto);
    return 0;
}
