#include <stdio.h>
#include <string.h>

int main() {
    int a, b, temp;
    printf("Enter a value of a: ");
    scanf("%d", &a);
    printf("Enter a value of b: ");
    scanf("%d", &b);
    printf("\nInitially, a = %d, b = %d\n", a, b);

	//Swapping values of a and b
    temp = a;
    a = b;
    b = temp;
    
    printf("  Finally, a = %d, b = %d\n", a, b);

	return 0;
}