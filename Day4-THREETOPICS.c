#include <stdio.h>

int main() {
    int A, B, C, X; // Prepared topics A, B, C and the given topic X
    scanf("%d %d %d %d", &A, &B, &C, &X);

    // Check if X is one of the prepared topics
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

