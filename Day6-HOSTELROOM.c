#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, X; 
        scanf("%d %d", &N, &X);

        int A[100], max_people = X, current_people = X;

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); 
        }

        for (int i = 0; i < N; i++) {
            current_people += A[i]; 
            if (current_people > max_people) {
                max_people = current_people;
            }
        }

        printf("%d\n", max_people);
    }

    return 0;
}
