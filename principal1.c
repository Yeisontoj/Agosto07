#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("ingrese un numero: ");
    scanf("%d", &num1);
    printf("ingrese un numero: ");
    scanf("%d", &num2);
    num3=num1+num2;
    printf("Resultado de la suma es: %d", num3);
    num3=num1-num2;
    printf("Resultado de la resta es: %d", num3);
    num3=num1/num2;
    printf("Resultado de la divicion es: %d", num3);
    num3=num1*num2;
    printf("Resultado de la multiplicacion es: %d", num3);
    return 0;
}