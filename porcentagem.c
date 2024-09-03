#include <stdio.h>

int main(){
    float sp = 67836.43,
          rj = 36678.66,
          mg = 29229.48,
          es = 27165.48,
          outros = 19849.53,
          total;

    total = sp + rj + mg + es + outros;

    printf("SP: %.2f%%\n", (sp / total) * 100);
    printf("RJ: %.2f%%\n", (rj / total) * 100);
    printf("MG: %.2f%%\n", (mg / total) * 100);
    printf("ES: %.2f%%\n", (es / total) * 100);
    printf("Outros: %.2f%%\n", (outros / total) * 100); 
}