# include <stdio.h>
int main(void){
  int num;
  printf("整数を入力してください :");
  scanf("%d",&num);

  for(int i = 1; i <= num; i ++){
    printf("*");
    if(i % 5 == 0)
      puts("");
  }
  puts("");
  return 0;
}
