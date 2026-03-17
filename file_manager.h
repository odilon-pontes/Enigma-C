#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

/* Modos de operação passados para dadosCrypto */
#define MODO_CRIPTOGRAFAR   1
#define MODO_DESCRIPTOGRAFAR 2

void dadosCrypto(int modo);
void removeNovaLinha(char *str);
void limparBuffer(void);

#endif
