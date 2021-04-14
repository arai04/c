# include <stdio.h>
int main(void){

  int num;

  printf("下向き数字ピラミッドを作ります。\n");
  printf("何段ですか：");
  scanf("%d", &num);

  for (int i = 0; i < num; i++){
    for (int j = 0; j < num - 2*i; j++){
      printf("%d", num -i);
    }
    puts("");
  }
}
