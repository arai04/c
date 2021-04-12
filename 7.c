# include <stdio.h>
int main(void){

  int height1, height2, d;
  double weight;

  printf("何cmから：");    scanf("%d", &height1);
  printf("何cmまで：");    scanf("%d", &height2);
  printf("何cmごと：");    scanf("%d", &d);

  for (int i = height1; i <= height2; i = i + d){
    weight = (i - 100) * 0.9;
    printf("%dcm  %.2fkg\n", i, weight);
  }

  return 0;
}
