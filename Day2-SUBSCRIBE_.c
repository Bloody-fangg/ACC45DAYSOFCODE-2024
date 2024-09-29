#include <stdio.h>
#include <math.h>

int main() {
      //your code goes here
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X; // Size of the group and cost of one subscription
        scanf("%d %d", &N, &X);

        // Calculate the number of subscriptions needed
        int subscriptions = ceil((double)N / 6);

        // Calculate the minimum total cost
        int totalCost = subscriptions * X;

        printf("%d\n", totalCost);
    }

    return 0;
}



