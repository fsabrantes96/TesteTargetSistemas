#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int ehFibonacci(int num) {
    int n = 0;
    int fib;

    do {
        fib = fibonacci(n);
        if(fib == num) {
            return 1;
        }
        n++;
    } while (fib < num);
    return 0;
}

int main(){
    
    int valor;

    printf("Informe o valor que deseja saber se perntence a sequencia de Fobonacci: ");
    scanf("%d", &valor);

    if(ehFibonacci(valor)){
        printf("%d pertence a sequencia de fibonacci.\n", valor);
    } else {
        printf("%d nao pertence a sequencia de fibonacci.\n",valor);
    }

}