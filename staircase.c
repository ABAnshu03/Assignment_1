#include <stdio.h>
int main() {
    printf("Searching Element Using Staircase Approach\n");
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};
    int key;
    printf("Enter the number to Search : ");
    scanf("%d", &key);
    
    int sr = 0;
    int sc = 3; // Starting column index is the last column

    while (sr < 4 && sc >= 0) {
        if (arr[sr][sc] == key) {
            printf("Element present at index (%d,%d)\n", sr, sc);
            return 0;
        } else if (arr[sr][sc] > key) {
            sc--;
        } else {
            sr++;
        }
    }
    printf("Element NOT present\n");
    return 0;
}