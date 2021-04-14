# include <stdio.h>
#define NUM n
void inversion_array(int v1[], const int v2[], int n){

  int i;
  for (i = 0; i < n; i++){
    v1[i] = v2[n - i - 1];
  }
}

int main(){

  int i,n;
  printf("入力された要素を反転させます。\n");
  printf("要素数は？: ");
  scanf("%d", &n);

  int x[NUM],y[NUM];
  printf("要素を入力して下さい。\n");
  for (i = 0; i < n; i++){
    printf("x[%d] : ", i);
    scanf("%d", &y[i]);
  }
  printf("反転させます\n");
  inversion_array(x, y, n);
  for (i = 0; i < n; i++){
    printf("x[%d] = %d\n", i, x[i]);
  }
  return 0;
}
