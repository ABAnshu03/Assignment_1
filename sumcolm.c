#include <stdio.h>
int main(){
    printf("Sum of Columns .\n");
  printf("Enter the Size of row : ");
  int n;
  scanf("%d",&n);
  printf("Enter the Size of column : ");
  int m;
  scanf("%d",&m);
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        printf("Enter Number : ");
        scanf("%d",&arr[i][j]);}
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {printf("%d ",arr[i][j]);}
    printf("\n");
  }
  int colm[m];
  for(int i=0;i<m;i++){
      colm[i]=0;
      for(int j=0;j<n;j++){
          colm[i]+=arr[j][i];
      }
      printf("%d ",colm[i]);
  }
}