#include <stdio.h>

void incodr(int n[], int length) {
    for (int i = 1; i < length; i++) {
        int key = n[i];
        int j = i - 1;
        while (j >= 0 && n[j] > key) {
            n[j + 1] = n[j];
            j = j - 1;
        }
        n[j + 1] = key;
    }
}

void decodr(int n[], int length) {
    for (int i = 1; i < length; i++) {
        int key = n[i];
        int j = i - 1;
        while (j >= 0 && n[j] < key) {
            n[j + 1] = n[j];
            j = j - 1;
        }
        n[j + 1] = key;
    }
}

int main() {
    printf("Insertion sorting\n");
    int num[] = {5, 3, 1, 4, 1, 2};
    int length = sizeof(num) / sizeof(num[0]);

    printf("Increasing Order:\n");
    incodr(num, length);
    for (int i = 0; i < length; i++) {
        printf("%d ", num[i]);
    }

    printf("\nDecreasing Order:\n");
    decodr(num, length);
    for (int i = 0; i < length; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
