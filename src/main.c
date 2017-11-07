#include <stdio.h>

int main() {
  int a[5];
  int n;
  int j;
  int k = 0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
    for(j=0 ; j<5 ; j++){
    	if(i % a[j] == 0){
    		printf("%d", j);
    		k++;
    	}
    }
    if(k == 0){
    	printf("-\n");
    }else{
    	printf("\n");
    }
    k = 0;
  }

  return 0;
}
