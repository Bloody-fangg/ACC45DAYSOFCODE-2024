#include <stdio.h>
int main(void){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,c;
        scanf("%d %d",&a,&c);
        if ((c*100/a)>=50){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}