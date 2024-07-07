#include <stdio.h>
#include <math.h>

int main() {
	double a;
	printf("\nEnter an angle (in radians): ");
	scanf("%lf", &a);
	
	printf("sin(%.2lf) = %.2f\n", a, sin(a));
	printf("cos(%.2lf) = %.2f\n", a, cos(a));
	
	int b;
	printf("\nEnter a number: ");
	scanf("%d", &b);
	
	double e = 2.718281828459045;
	printf("ln (%d) = %.2f\n", b, log(b));
	printf("e ^ %d  = %.2f\n", b, pow(e, b));
	printf("Square root of %d = %.2f\n", b, sqrt(b));
	
	return 0;
}