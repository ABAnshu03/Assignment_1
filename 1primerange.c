#include <stdio.h>

int isprime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void primerange(int n) {
    for (int i = 2; i <= n; i++) {
        if (isprime(i) == 1) {
            printf("%d\n", i);
        }
    }
}

int main() {
    printf("To Print only prime numbers\n");
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);
    primerange(num);
    return 0;
}