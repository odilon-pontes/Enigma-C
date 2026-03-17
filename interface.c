#include <stdio.h>
#include "interface.h"


void exibirLogo(void) {
    printf(
        "        .--------.\n"
        "       / .------. \\\n"
        "      / /        \\ \\\n"
        "      | |        | |\n"
        "     _| |________| |_\n"
        "   .' |_|        |_| '.\n"
        "   '._____      _____.'" "    XOR CRYPTO SYSTEM  \n"
        "   |     |______|     |" "  Protecao de Arquivos \n"
        "   |     |  __  |     |" "     em Linguagem C    \n"
        "   |     | |  | |     |\n"
        "   |     | |__| |     |\n"
        "   |     |______|     |\n"
        "   '------------------'\n"
        "\n"
    );
}

void exibirMenu(void) {
    printf(
        "\n  [MENU PRINCIPAL]\n"
        "  [1] Criptografar Arquivo (XOR)\n"
        "  [2] Descriptografar Arquivo (XOR)\n"
        "  [0] Sair do Sistema\n"
        "________________________________________________________\n"
        "Escolha uma opcao: "
    );
}

void opcaoInvalida(void) {
    printf("\n[!] Opcao invalida. Tente novamente.\n");
}
