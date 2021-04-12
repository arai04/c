# include <stdio.h>
int main(void){

  int a,b,x = 0;
  int sum = 0;
  puts("2つの整数を入力してください");
  printf("整数a :"); scanf("%d",&a);
  printf("整数b :"); scanf("%d",&b);

  if(a <= b){

    do{
      sum += a;
      a ++;
      x ++;
    }while(a <= b);
    printf("%d以上%d以下の全整数の和は%dです。\n",a - x,b,sum);

  }else {

    do{
      sum += b;
      b ++;
      x ++;
    }while(b <= a);
    printf("%d以上%d以下の全整数の和は%dです。\n",b - x,a,sum);
  }


  return 0;
}
