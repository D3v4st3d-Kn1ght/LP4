#include <stdio.h>

int main() {
     
    float nota;

    printf("Digite sua nota:");
    scanf("%f", &nota);
    
    if(nota <= 10) {
        if(nota >= 9) {
           puts("Nota A!");
        }
    }
    if(nota >= 8) {
        if(nota < 9) {
           puts("Nota B!");
        }
    }
    if(nota >= 7) {
        if(nota < 8) {
           puts("Nota C!");
        }
    }
    if(nota >= 6) {
        if(nota < 7) {
           puts("Nota D!");
        }
    }
    if(nota < 6) {
        puts("Nota E!");
    }
}