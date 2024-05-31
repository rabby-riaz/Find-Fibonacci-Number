#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, next, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (n == 1) {
        printf("Fibonacci sequence: %d\n", n1);
        return 0;
    }

    printf("Fibonacci sequence: %d %d", n1, n2);

    for (int i = 3; i <= n; i++) {
        next = n1 + n2;
        printf(" %d", next);
        n1 = n2;
        n2 = next;
    }

    printf("\n");
    return 0;
}
