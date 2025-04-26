#include <stdio.h>
#include <locale.h>

double calcular_area(double pi, double raio){
    return pi * raio * raio;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    double R, A, n = 3.14159;
    
    printf("Digite o raio do circulo para saber a área: \n");
    scanf("%lf", &R);

    A = calcular_area(n,R);

    printf("A= %lf\n", A);
    return 0;
}