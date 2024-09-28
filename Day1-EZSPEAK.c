
#include <stdio.h>
#include <string.h>
   //your code goes here
// Function to check if a character is a vowel
int is_vowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        char S[101];
        scanf("%d", &N);
        scanf("%s", S);

        int consecutive_consonants = 0;
        int hard_to_pronounce = 0;

        for (int i = 0; i < N; i++) {
            if (!is_vowel(S[i])) {
                consecutive_consonants++;
                if (consecutive_consonants >= 4) {
                    hard_to_pronounce = 1;
                    break;
                }
            } else {
                consecutive_consonants = 0;
            }
        }

        if (hard_to_pronounce) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}



