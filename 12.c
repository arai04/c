# include <stdio.h>
int main(void){

  int num;

  printf("下向き数字ピラミッドを作ります。\n");
  printf("何段ですか：");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++){
    for (int j = 1; j < i; j++){
      putchar(' ');
    }
    for (int j = 1; j <= 2 * (num - i) + 1; j++){
      printf("%d", i % 10);
    }
    puts("");
  }
}
