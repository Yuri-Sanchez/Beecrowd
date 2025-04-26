#include <stdio.h>
#include <locale.h>

float calcular_media(float notas[]){
    float pesos[3] = {2, 3, 5};
    float soma_notas = 0, soma_pesos = 0;

    for(int i = 0;i < 3; i++){
        soma_notas += notas[i] * pesos[i];
        soma_pesos += pesos[i];
    }
    return soma_notas / soma_pesos;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    float media, notas[3];

    for(int i = 0; i < 3; i++){
        printf("Digite a %d° nota: \n", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcular_media(notas);
    printf("Média = %.1f\n", media);

    return 0;
}