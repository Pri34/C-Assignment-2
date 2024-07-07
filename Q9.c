#include <stdio.h>

int main() {
	//Dividing 2 nos.
	int a, b;
	printf("Enter first number:  ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	float res = (float) a / b;
	
	printf("%d / %d = %.2f", a, b, res);
	
	return 0;
}