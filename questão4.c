#include <stdio.h>
#include <string.h>

int main(void)
{   
    FILE* file = fopen("q4.txt", "w"); //tenta abrir ou criar um arquivo chamado q4.txt no modo "w" = write mode, cria um novo arquivo ou sobrescreve o existente (apaga o conteúdo anterior)
    if (file == NULL){  // se fopen() falhar, por exemplo, falta de permissão, diretório inexistente, etc, ela retorna NULL
        printf("arquivo não criado \n");
        return 1;
    }
    for(int i = 0; i<10; i++){ 
        char string[32]; //guarda uma palavra digitada pelo usuário até 31 caracteres + \0 final
        printf("Diga uma palavra: ");
        scanf("%25s", string);    //string e &string[0] são equivalentes pq string é um ponteiro para o primeiro elemento

        int size = strlen(string);

        for (int i = 0; i < size; i++){
            fputc(string[i], file); //grava um caractere por vez no arquivo
        }
        fprintf(file, "\n"); //cada palavra fica separada por linha no arquivo
    }

    fclose(file); //fecha o arquivo e garante que tudo que foi escrito em memória seja realmente salvo em disco
}
