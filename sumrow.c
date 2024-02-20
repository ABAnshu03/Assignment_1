#include <stdio.h>
int main(){
    printf("Sum of Rows .\n");
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
  int row[n];
  for(int i=0;i<n;i++){
      row[i]=0;
      for(int j=0;j<m;j++){
          row[i]+=arr[i][j];
      }
      printf("%d ",row[i]);
  }
}