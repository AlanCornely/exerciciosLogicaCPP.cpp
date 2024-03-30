#include <iostream>

int main (){

    int num1;
    printf("digite seu numero: ");
    scanf("%d", &num1);

    int par = num1 & 1;
    printf("par: %d = %d - par", num1, num1, par);

    int impar = num1 >> 1;
    printf("impar: %d = %d >> impar", num1, num1, impar);
return 0;
}
