#include <stdio.h>
#include <string.h>
#include "file_manager.h"
#include "crypto.h"

#define TAM 50

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void removeNovaLinha(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

void dadosCrypto(int modo) {
    char arquivoEntrada[TAM], senha[TAM], arquivoSaida[TAM];

    limparBuffer();

    printf("Nome do arquivo de entrada: ");
    fgets(arquivoEntrada, sizeof(arquivoEntrada), stdin);
    removeNovaLinha(arquivoEntrada);

    printf("Senha: ");
    fgets(senha, sizeof(senha), stdin);
    removeNovaLinha(senha);

    printf("Nome do arquivo de saida: ");
    fgets(arquivoSaida, sizeof(arquivoSaida), stdin);
    removeNovaLinha(arquivoSaida);

    /* XOR é simétrico: criptografar e descriptografar usam a mesma operação.
       O parâmetro modo pode ser usado futuramente para validações distintas. */
    (void)modo;
    crypto(arquivoEntrada, senha, arquivoSaida);
}
