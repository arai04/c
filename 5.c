# include <stdio.h>
int main(void){

  int num;

  do{
  printf("正の整数を入力してください :");
  scanf("%d",&num);
  if(num <= 0) 
  puts("正でない数を入力しないでください。");
  }while(num <= 0);

  printf("%dを逆から読むと",num);
  while(num > 0){
    printf("%d",num % 10);
    num /= 10;
  }
  puts("です");

  return 0;
}
