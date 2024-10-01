#include <stdio.h>

int main() {
    //your code goes here
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Working hours on weekdays and Friday
        scanf("%d %d", &X, &Y);

        // Calculate total working hours in one week
        int totalHours = 4 * X + Y; // 4 weekdays + 1 Friday

        printf("%d\n", totalHours);
    }

    return 0;
}



