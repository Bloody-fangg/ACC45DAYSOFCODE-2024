#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  int x = *(int*)a;
  int y = *(int*)b;
  return x - y;
}

int main(void) {
	int a,b;
	scanf("%d",&a);
	while(a--){
	    scanf("%d",&b);
	    int arr[b];
	    for(int i =0;i<b;i++){
	        scanf("%d",&arr[i]);
	    }
	   qsort(arr, b, sizeof(int), compare);
	    if(b%2!=0){
	        printf("NO\n");
	    }
	    else{
	        int i = 0;
	        for (; i < b; i+=2) {
                if(arr[i] != arr[i+1]){
                    printf("NO\n");
                    break;
                }
            }
            if(i == b){
                printf("YES\n");
            }
	    }
	}
	return 0;
}
