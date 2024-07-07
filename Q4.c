#include <stdio.h>

int main() {
    int x = 5;

    x += 2; //x = x + 2
    printf("x + 2 = %d = New x\n", x);

    x -= 2; //x = x - 2
    printf("New x - 2 = %d\n", x);

    x *= 2; //x = x * 2
    printf("5 X 2 = %d\n", x);
    
    x /= 2; //x = x / 2
    printf("Quotient of 10 / 2 = %d\n", x);

    x %= 2; //x = x % 2
    printf("Remainder of 5 / 2 = %d\n", x);


    return 0;
}