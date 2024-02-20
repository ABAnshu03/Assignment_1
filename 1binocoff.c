#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int bincoef(int n, int r) {
    int coff = fact(n) / (fact(r) * fact(n - r));
    return coff;
}

int main() {
    printf("To print Binomial Coefficient\n");
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    printf("Enter the value of r: ");
    int r;
    scanf("%d", &r);
    printf("Binomial Coefficient = %d\n", bincoef(n, r));
    return 0;
}
