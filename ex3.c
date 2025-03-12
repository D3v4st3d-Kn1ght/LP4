#include <stdio.h>

int main() {
    float temperatura;
    float umidade;

    printf("Digite a Temperatura: ");
    scanf("%f", &temperatura);

    if(temperatura < 25) {
        printf("Digite a umidade: ");
        scanf("%f", &umidade);
        if(umidade >= 70) {
           puts("Vai chover!");
        }
        else {
           puts("Não chove!");
        }
    } else {
        puts("Não chove!");
    }
}