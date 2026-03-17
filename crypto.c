#include <stdio.h>
#include <string.h>
#include "crypto.h"

int crypto(const char *entrada, const char *senha, const char *saida) {
    if (senha == NULL || *senha == '\0') {
        fprintf(stderr, "\nErro: senha vazia ou invalida.\n");
        return 0;
    }

    FILE *fin = fopen(entrada, "rb");
    if (fin == NULL) {
        fprintf(stderr, "\nErro: nao foi possivel abrir '%s'.\n", entrada);
        return 0;
    }

    FILE *fout = fopen(saida, "wb");
    if (fout == NULL) {
        fprintf(stderr, "\nErro: nao foi possivel criar '%s'.\n", saida);
        fclose(fin);
        return 0;
    }

    int c;
    size_t i = 0;
    const size_t senhaLen = strlen(senha);  /* evita chamar strlen no loop */

    while ((c = fgetc(fin)) != EOF) {
        fputc(c ^ senha[i], fout);
        i = (i + 1) % senhaLen;            /* rotação sem branch */
    }

    fclose(fin);
    fclose(fout);

    printf("\nOperacao realizada com sucesso!\n");
    return 1;
}
