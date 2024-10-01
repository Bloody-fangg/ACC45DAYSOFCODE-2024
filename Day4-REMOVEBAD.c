#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Length of array A
        scanf("%d", &N);

        // Read the array elements
        int A[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }

        // Count the frequency of each element
        int freq[100001] = {0}; // Assuming array elements are in the range [1, 100000]
        for (int i = 0; i < N; ++i) {
            freq[A[i]]++;
        }

        // Find the maximum frequency
        int maxFreq = 0;
        for (int i = 1; i <= 100000; ++i) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }

        // Calculate the minimum number of operations
        int minOperations = N - maxFreq;

        printf("%d\n", minOperations);
    }

    return 0;
}
