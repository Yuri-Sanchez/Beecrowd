#include <stdio.h>
#include <locale.h>

float calcular_media(float notas[], float tamanho){
    float soma = 0;
    for(int i = 0; i < 2; i++){
        soma += notas[i];
    }
    return soma / tamanho;
}
 
int main() {
    setlocale(LC_ALL, "Portuguese");

    float n[2], media;
    int i;

    for(i=0;i<2;i++){
        printf("Digite a %d° nota: \n", i + 1);
        scanf("%f",&n[i]);
    }
    
    media = calcular_media(n,2);
    
    printf("MEDIA = %.5f",media);
    
    return 0;
}