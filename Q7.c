#include <stdio.h>

int main() {
    //Checks for the max no. between 2 nos.
    int x, y, max;
    printf("\nEnter first number:  ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    
    max = (x > y) ? x:y ;
    
    printf("\n%d is the bigger number!\n", max);

    return 0;
}