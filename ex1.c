#include <stdio.h>

int main() {

    int imc;

    printf("Digite o IMC: ");
    scanf("%d", &imc);

    if(imc >= 18.5) {
       if(imc <= 24.9) {
          puts("Está no Intervalo Normal!");
       }
       else {
          puts("Acima do invervalo normal!");
       }
    } 
    else {
       puts("Abaixo do invervalo normal!");
    }
    return 0; 
}