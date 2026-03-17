#include <stdio.h>
#include "interface.h"
#include "file_manager.h"

int main(void) {
    exibirLogo();

    int op;
    do {
        exibirMenu();

        if (scanf("%d", &op) != 1) {
            limparBuffer();
            opcaoInvalida();
            continue;
        }

        switch (op) {
            case 1:
                printf("\nDados para criptografia:\n\n");
                dadosCrypto(MODO_CRIPTOGRAFAR);
                break;
            case 2:
                printf("\nDados para descriptografia:\n\n");
                dadosCrypto(MODO_DESCRIPTOGRAFAR);
                break;
            case 0:
                break;
            default:
                opcaoInvalida();
                break;
        }
    } while (op != 0);

    printf("\nTchau...\n");
    return 0;
}
