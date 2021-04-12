# include <stdio.h>
int main(void){
  int height,width;
  puts("長方形を作ります");
  printf("高さ :");scanf("%d",&height);
  printf("横幅 :");scanf("%d",&width);

  for(int i = 0; i < height; i ++){
    for(int j = 0; j < width; j ++){
      printf("*");
    }
    puts("");
  }
  return 0;
}
