#include <stdio.h>
int maxsum1(int a[], int size) {
    int msum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum = sum + a[k];
            }
            if (sum > msum) {
                msum = sum;
            }
        }
    }
    return msum;
}

int main() {
    printf("To get the max Subarray Sum\n");
    int num[] = {1, 2, -1, -2, 3, -1, 4};
    int size = sizeof(num) / sizeof(num[0]);
    printf("The Max Subarray Sum is %d\n", maxsum1(num, size));
    return 0;
}
