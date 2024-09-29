#include <stdio.h>
 //your coode goes here
// Function to calculate the total score
int calculateTotal(int dsa, int toc, int dm) {
    return dsa + toc + dm;
}

// Function to compare scores and determine the winner
void determineWinner(int dragon_dsa, int dragon_toc, int dragon_dm,
                     int sloth_dsa, int sloth_toc, int sloth_dm) {
    int dragon_total = calculateTotal(dragon_dsa, dragon_toc, dragon_dm);
    int sloth_total = calculateTotal(sloth_dsa, sloth_toc, sloth_dm);

    if (dragon_total > sloth_total) {
        printf("DRAGON\n");
    } else if (dragon_total < sloth_total) {
        printf("SLOTH\n");
    } else {
        // If total scores are tied, compare DSA scores
        if (dragon_dsa > sloth_dsa) {
            printf("DRAGON\n");
        } else if (dragon_dsa < sloth_dsa) {
            printf("SLOTH\n");
        } else {
            // If DSA scores are also tied, compare TOC scores
            if (dragon_toc > sloth_toc) {
                printf("DRAGON\n");
            } else if (dragon_toc < sloth_toc) {
                printf("SLOTH\n");
            } else {
                // If everything is tied, it's a tie
                printf("TIE\n");
            }
        }
    }
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int dragon_dsa, dragon_toc, dragon_dm;
        int sloth_dsa, sloth_toc, sloth_dm;

        // Input scores for Dragon
        scanf("%d %d %d", &dragon_dsa, &dragon_toc, &dragon_dm);

        // Input scores for Sloth
        scanf("%d %d %d", &sloth_dsa, &sloth_toc, &sloth_dm);

        // Determine the winner
        determineWinner(dragon_dsa, dragon_toc, dragon_dm,
                        sloth_dsa, sloth_toc, sloth_dm);
    }

    return 0;
}



