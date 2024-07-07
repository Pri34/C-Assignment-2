#include <stdio.h>

int main() {    
    int x = 6;  //6 = 00000110
    int y = 12; //12= 00001100
	int z = 0;	//0 = 00000000
	
    // << = Left Shift
    z = x << 1;//x<<1=00001100 = 12 = 6 * 2
    printf("\nLeft shifting %d by 1 = %d\n", x, z);
    z = x << 2;//x<<2=00011000 = 24 = 6 * 2^2
    printf("Left shifting %d by 2 = %d\n", x, z);

    // >> = Right Shift
    z = y >> 2;//y>>2=00000011 = 3 = 12 / 2^2
    printf("\nRight shifting %d by 2 = %d\n", y, z);
    z = y >> 3;//y>>3=00000001 = 1
    printf("Right shifting %d by 3 = %d\n", y, z);

    return 0;
}