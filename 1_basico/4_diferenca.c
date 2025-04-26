#include <stdio.h>
#include <locale.h>

int calcular_sub(int valor[]){
   return (valor[0] * valor[1]) - (valor[2]* valor[3]);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor[4], diferenca;

    for(int i = 0; i < 4; i++){
        printf("Digite o %d valor: \n", i + 1);
        scanf("%d", &valor[i]);
    }

    diferenca = calcular_sub(valor);
    
    printf("Diferenca = %d\n",diferenca);
    return 0;
}