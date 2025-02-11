#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a[n], b[n];
  int result[n];
  for(int i = 0; i<n; i++){
    scanf("%d %d", &a[i], &b[i]);
    result[i] = 0;
    if(a[i]%b[i]!=0){
      result[i] = b[i] - (a[i]%b[i]);
    }
  }
  for(int i=0; i<n; i++){
    printf("%d\n", result[i]);
  }
  return 0;
}
