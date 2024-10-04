#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X; // Time when Janmansh starts doing the assignments
        scanf("%d", &X);

        // Check if he can complete all three assignments
        if (X + 3 <= 10) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

