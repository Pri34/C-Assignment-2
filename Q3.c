#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("ax^2 + bx + c = 0\n");
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	double D = pow(b,2) - 4*a*c;		//Discriminant of the equation
	float x1 = ( -b + sqrt(D) ) / (2*a);	//Quadratic formula for first solution
	float x2 = ( -b - sqrt(D) ) / (2*a);    //Second solution
	
	printf("x = %.2f, %.2f", x1, x2);
	
	return 0;
}