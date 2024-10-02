#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int B1, B2, B3; // Bottle states (0 or 1)
        scanf("%d %d %d", &B1, &B2, &B3);

        // Check if at least two bottles are empty
        if (B1 + B2 + B3 <= 1) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}


