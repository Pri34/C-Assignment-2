#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[50];
	printf("Enter a large decimal numeric string: ");
	scanf("%[^\n]s", &s);
	
	// Convert string to int
	int d = atoi(s);
	printf("\nString to Integer: %d\n", d);
	
	// Convert string to float
	float f = atof(s);
	printf("\nString to Float: %f\n", f);
	
	// Convert string to long
	long l = atol(s);
	printf("\nString to Long: %ld\n", l);
	
	char s1[50];
	// Convert int to string
	itoa(3+2, s1, 10);
	printf("\nThree + Two = %s", s1);
	
	// Convert long to string
	ltoa(123456789+987654321, s1, 10);
	printf("\n123456789+987654321 = %s", s1);
	
	return 0;
}