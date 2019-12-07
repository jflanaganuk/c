#include <stdio.h>
#include <stdlib.h>

int main() {
    const int num = 5;
    printf("%d\n", num);
    const int newnum = num + 3;
    printf("%d\n", newnum);
    return 0;
}