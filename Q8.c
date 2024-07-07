#include <stdio.h>

int main() {
	char a;
	int b;
	long int c;
	float d;
	double e;
	
	printf("Size of a character = %d byte(s)\n", sizeof(a));
	printf("Size of an integer  = %d byte(s)\n", sizeof(b));
	printf("Size of a long int  = %d byte(s)\n", sizeof(c));
	printf("Size of a float     = %d byte(s)\n", sizeof(d));
	printf("Size of a double    = %d byte(s)\n", sizeof(e));
	
	return 0;
}