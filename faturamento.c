#include <stdio.h>

float menorValor(float vet[], int tam){
    float menor = vet[0];

    for(int i = 1; i < tam; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

float maiorValor(float vet[], int tam){
    float maior = vet[0];
    for (int i = 1; i < tam; i++){
        if(vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

float calculoMedia(float vet[], int tam){
    float soma = 0;
    int count = 0;
    for(int i = 0; i < tam; i++){
        if(vet[i] > 0) {
            soma += vet[i];
            count++;
        }
    }
    return count > 0 ? soma / count : 0;
}

int diasAcimaDaMedia(float vet[], int tam, float media){
    int count = 0;
    for(int i = 0; i < tam; i++){
        if(vet[i] > media) {
            count++;
        }
    }
    return count;
}

int main(){
    float mes [5] = {50, 10.78, 100, 8.5, 56.74 };
    int tam = sizeof(mes) / sizeof(mes[0]);
    float menorValorMes, maiorValorMes, media;
    int diasAcima;
    

    menorValorMes = menorValor(mes, tam);
    maiorValorMes = maiorValor(mes, tam);
    media = calculoMedia(mes, tam);
    diasAcima = diasAcimaDaMedia(mes, tam, media);

    printf("O menor valor do vetor eh: %.2f\n", menorValorMes);
    printf("O maior valor do vetor eh: %.2f\n", maiorValorMes);
    printf("Numero de dias acima da media de %.2f mensal: %d\n", media, diasAcima);
}