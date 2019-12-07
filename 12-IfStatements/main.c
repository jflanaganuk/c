#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) {
    return (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
}

int main() {
    printf("The bigger number is %d\n", max(4, 10, 15));
    return 0;
}
