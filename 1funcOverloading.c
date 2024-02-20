#include <stdio.h>

int sum_int(int a, int b) {
    return a + b;
}

float sum_float(float a, float b) {
    return a + b;
}

int sum_3_int(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("Function Overloading Using Parameters\n");
    printf("%d\n", sum_int(5, 5));
    printf("%d\n", sum_3_int(5, 5, 5));
    
    printf("Function Overloading using Datatype\n");
    printf("%d\n", sum_int(5, 5));
    printf("%f\n", sum_float(5.5f, 6.6f));
    return 0;
}
