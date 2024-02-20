#include <stdio.h>

void generateFibonacci(int arr[][2], int n) {
    arr[0][0] = 0;
    arr[0][1] = 1;
    for (int i = 1; i < n; i++) {
        arr[i][0] = arr[i - 1][1];
        arr[i][1] = arr[i - 1][0] + arr[i - 1][1];
    }
}

int main() {
    int n;
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);
    
    int fibonacci[n][2];

    generateFibonacci(fibonacci, n);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i][0]);
    }
    printf("\n");

    return 0;
}
