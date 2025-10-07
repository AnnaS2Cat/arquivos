#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *arquivo; //as informações do arquivo ficam guardadas em uma estrutura chamada FILE, definida internamente na biblioteca <stdio.h>, não precisa acessar essa estrutura diretamente, o C entrega um ponteiro para ela do tipo FILE *, FILE (um tipo), o arquivo é um ponteiro que pode armazenar o endereço de uma estrutura do tipo FILE, esta guardando um endereço.

    char texto[26]; // o ultimo '\0', entao 26
    printf("Digite uma string (max 25 caracteres): ");
    fgets(texto, 26, stdin);

    arquivo = fopen("texto.txt", "w"); // abre o arquivo para escrita
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    for (int i=0; i<strlen(texto); i++) { //escreve cada caractere no arquivo
        fputc(texto[i], arquivo);
    }
    fclose(arquivo);
    printf("String gravada em 'saida.txt'!\n");
}
