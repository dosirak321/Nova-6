#include<stdio.h>
int main() {
  int sum = 0;
  for(int i=1; i<101; i++)
    sum += i;
  printf("%d\n", sum);

  int sum2 = 0;
  for(int k=0; k<101; k++) {
    if (k % 3 == 0)
      sum2 += k;
  }
  printf("%d\n", sum2);

  int t, s = 0;
  printf("숫자 하나를 입력하세요.");
  scanf("%d", &s);
  while (t==1) {
    if (s % 2 == 0) {
      t=s/2;
      printf("%d\n", t);
    }
    if (t % 2 != 0) {
      t=3*s+1;
      printf("%d\n", t);
    }
  }
  return 0;
}