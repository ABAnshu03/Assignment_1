#include <stdio.h>
#include <math.h>

int bin(int n) {
    int bin = 0;
    int power = 0;
    for (int i = n; i > 0; i /= 2) {
        int rem = i % 2;
        bin = bin + rem * pow(10, power);
        power++;
    }
    return bin;
}

int main() {
    printf("To convert Decimal to Binary\n");
    printf("Enter the Decimal number: ");
    int num;
    scanf("%d", &num);
    printf("Binary of %d is %d\n", num, bin(num));
    return 0;
}
