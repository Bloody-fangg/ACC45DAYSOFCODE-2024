#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        if (N ==1) {
            printf("ALICE\n");
        } else {
            printf("BOB\n");
        }
    }
    
    return 0;
}