# include <stdio.h>
#define NUM 5
#define FAILED -1
int search(int v[],int key,int n){
  int i = 0;

  v[n] = key;

  while(1){
    if(v[i] == key)
      break;
    i ++;
  }
  return (i < n) ? i : FAILED;
}
int main(void){
  int i,ky,idx;
  int x[NUM + 1];

  for(i = 0; i < NUM; i ++){
    printf("x[%d] : ",i);
    scanf("%d",&x[i]);
  }
  printf("探す値 : ");
  scanf("%d",&ky);
  if((idx = search(x,ky,NUM)) ==FAILED)
    puts("\a探索に失敗しました");
  else
    printf("%dは%d番目にあります。\n",ky,idx + 1);
  return 0;
}
