# include <stdio.h>
int main(void){

  int num;
  printf("正の整数を入力してください");
  scanf("%d",&num);

  for(int i = 1; i <= num; i++){
    printf("%d",i % 10);
  }
  puts("");
  return 0;
}
