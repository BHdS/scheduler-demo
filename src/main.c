#include <stdio.h>

int main() {
  int a[5];
  int n, i, j, flag;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<(n+1); i++) {
    flag = 0;
    for(j=0; j<5; j++){    
      if(i%a[j] == 0){
        printf("%d",j);
	flag = 1;
      }
    }
    if(flag == 0)
      printf("-\n");
    else
      printf("\n");
}
  return 0;
}
