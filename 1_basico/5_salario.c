#include<stdio.h>

int main(){
    int NUMBER,HORAS;
    float SALARY,VALOR;
    scanf("%d",&NUMBER);
    scanf("%d",&HORAS);
    scanf("%f",&VALOR);
    SALARY=HORAS*VALOR;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}