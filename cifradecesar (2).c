#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[100];
    char cript[100];
    int tam_palavra;
    int i, chave;

    // encrypt
    printf("qual a chave de rotacao? \n");
    scanf("%d", &chave);
    printf("\n Digite a palavra a ser criptografada: ");
    scanf("%s", &palavra);
    strlwr(palavra);

    tam_palavra = strlen(palavra);
    for (i = 0; i < tam_palavra; i++)
    {
        cript[i] = palavra[i] + chave;
    }

    printf(" A mensagem criptografada e : %s\n", cript);

    // decrypt
    printf(" Digite mensagem a ser descriptografada: ");
    scanf("%s", &cript);

    tam_palavra = strlen(cript);
    for (i = 0; i < tam_palavra; i++)
    {
        palavra[i] = cript[i] - chave;
    }

    printf(" A mensagem descriptografada e : %s \n", palavra);
    return 0;
}