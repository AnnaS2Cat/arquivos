#include <stdio.h>
#include <string.h>

int main(void)
{   
    FILE* file = fopen("q4.txt", "w"); //tenta abrir ou criar um arquivo chamado q4.txt no modo "w" = write mode, cria um novo arquivo ou sobrescreve o existente (apaga o conteúdo anterior)
    if (file == NULL){  // se fopen() falhar, por exemplo, falta de permissão, diretório inexistente, etc, ela retorna NULL
        printf("arquivo não criado \n");
        return 1;
    }
    char strings[10][26];
    for(int i = 0; i<10; i++){ 
        printf("Diga uma palavra: ");
        scanf("%25s", strings[i]);    //string[i] e &strings[i][0] são equivalentes pq string é um ponteiro para o primeiro elemento. Scanf precisa receber o endereço do primeiro caractere da string onde vai guardar o texto
        //tá acessando a primeira string, depois a segunda até 10
        //leio ela pra saber o que tem dentro, pra depois que o computador souber, colocar no arquivo
        
        int size = strlen(strings[i]);

        for (int i = 0; i < size; i++){
            fputc(strings[i][j], file); //grava um caractere por vez no arquivo
        }
         fputc('\n', file);  //cada palavra fica separada por linha no arquivo
    }
    fclose(file); //fecha o arquivo e garante que tudo que foi escrito em memória seja realmente salvo em disco
    printf("As palavras foram salvas em 'q4.txt'.\n");
}
