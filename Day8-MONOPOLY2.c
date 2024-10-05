#include <stdio.h>

int main() {
    int ioht;
    scanf("%d",&ioht);
    while (ioht--) {
        int yuh,rgf,hen,cvi;
        scanf("%d%d%d%d",&yuh,&rgf,&hen,&cvi);
        int jak=yuh+rgf+hen+cvi;
        int spar=yuh;
        if (rgf>spar) {
            spar=rgf;
        }
        if (hen>spar) {
            spar=hen;
        }
        if (cvi>spar) {
            spar=cvi;
        }
        if (spar>jak-spar) {
            printf("YES\n");
        } else {
            printf("NO\n");}}
    return 0;
}


