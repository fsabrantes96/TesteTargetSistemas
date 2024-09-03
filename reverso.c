#include <stdio.h>
#include <string.h>

void palavraReversa(char palavra[]) {
    int tamanho = strlen(palavra);
    int ini = 0;
    int final = tamanho - 1;
    char temp;

    while(ini < final) {
        temp = palavra[ini];
        palavra[ini] = palavra[final];
        palavra[final] = temp;
    }

    ini++;
    final++;
}

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    gets(palavra);

    palavraReversa(palavra);
    printf("String invertida: %s\n", palavra);
}