#include <stdio.h>

void printFibonacci(int n);

int main() {
    int n = 10;

    // Print the Fibonacci sequence
    printf("Fibonacci Sequence:\n");
    printFibonacci(n);

    return 0;
}

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}
