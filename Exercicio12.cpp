#include <iostream>

int main () {

    int num1;
    
    printf("digite um numero:\n");
    scanf("%d", &num1);

    int div;
    div = num1 / 3 && num1 / 5;

    printf("seu numero é divisivel? %d /3 && %d /5", num1, num1);


return 0;
}