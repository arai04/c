# include <stdio.h>
int main(void){

  int i, j, n;

  printf("下向き数字ピラミッドを作ります。\n");
  printf("何段ですか：");
  scanf("%d", &n);

  for (i = 1; i <= n; i++){
    for (j = 1; j < i; j++){
      putchar(' ');
    }
    for (j = 1; j <= 2 * (n - i) + 1; j++){
      printf("%d", i % 10);
    }
    puts("");
  }
}
