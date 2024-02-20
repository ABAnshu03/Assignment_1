#include <stdio.h>

void printSpiral(int arr[][100], int n, int m) {
    int sr = 0, er = n - 1, sc = 0, ec = m - 1;
    while (sr <= er && sc <= ec) {
        for (int i = sc; i <= ec; i++) {
            printf("%d ", arr[sr][i]);
        }
        for (int i = sr + 1; i <= er; i++) {
            printf("%d ", arr[i][ec]);
        }
        for (int i = ec - 1; i >= sc; i--) {
            printf("%d ", arr[er][i]);
        }
        for (int i = er - 1; i >= sr + 1; i--) {
            printf("%d ", arr[i][sc]);
        }
        sr++;
        sc++;
        er--;
        ec--;
    }
}

int main() {
    printf("Printing Elements in spiral form.\n");
    printf("Enter the Size of row: ");
    int n;
    scanf("%d", &n);
    printf("Enter the Size of column: ");
    int m;
    scanf("%d", &m);
    int arr[n][100]; // Assuming maximum column size is 100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter Number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nPRINTING ELEMENTS IN SPIRAL FORMAT\n");
    printSpiral(arr, n, m);
    return 0;
}
