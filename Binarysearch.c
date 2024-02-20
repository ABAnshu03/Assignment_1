#include <stdio.h>

int binsrh(int a[], int size, int n) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (a[mid] == n) {
            return mid;
        } else if (a[mid] > n) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}
int main() {
    int num[] = {2, 4, 6, 8, 10, 12, 14};
    int key = 10;
    int size = sizeof(num) / sizeof(num[0]);
    int index = binsrh(num, size, key);
    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}
