# include <stdio.h>
int main(void){
  int i, j, k, sum = 0;
  int x[3][4], y[4][3];

  printf("４行３列の行列と３行４列の行列の積を求めます。\n");
  printf("４行３列の行列を入力して下さい。\n");
  for(i = 0; i < 3; i++){
    for(j = 0; j < 4; j ++){
      printf("x[%d][%d] :",i,j);
      scanf("%d",&x[i][j]);
    }
    puts("");
  }

  printf("３行４列の行列を入力して下さい。\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j ++){
      printf("y[%d][%d] :",i,j);
      scanf("%d",&y[i][j]);
    }
    puts("");
  }



  printf("４行３列の行列と３行４列の行列の積は\n");

  for(k = 0; k < 3; k ++){
    for(i = 0; i < 3; i ++){
      for(j = 0; j < 4; j ++){
        sum += x[k][j] * y[j][i];
      }
      printf("%3d",sum);
      sum = 0;
    }
    puts("");
  }
  return 0;
}


