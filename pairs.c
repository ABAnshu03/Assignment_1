#include <stdio.h>
void pairs(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("(%d,%d) ", i, j);
        }
    }
}

int main() {
    printf("Printing the Pairs in an Array\n");
    int num[] = {1, 2, 3, 4, 5};
    int size = sizeof(num) / sizeof(num[0]);
    pairs(num, size);
    return 0;
}
