#include <stdio.h>
int power(int n, int p) {
    if (p == 0) {
        return 1;
    }
    int pow = 1;
    for (int i = 1; i <= p; i++) {
        pow = pow * n;
    }
    return pow;
}
int deci(int n) {
    int pow = 0;
    int dec = 0;
    while (n > 0) {
        int i = n % 10;
        dec = dec + (i * power(2, pow));
        pow++;
        n /= 10;
    }
    return dec;
}
int main() {
    printf("To convert Binary to Decimal\n");
    printf("Enter the Binary number: ");
    int num;
    scanf("%d", &num);
    printf("Decimal of %d is %d\n", num, deci(num));
    return 0;
}