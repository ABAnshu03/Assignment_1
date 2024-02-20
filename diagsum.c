#include <stdio.h>
int main() {
    printf("Sum of Diagonals\n");
    printf("Enter the size of 2D Square matrix : ");
    int n;
    scanf("%d",&n);
    int m=n;
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
  int sum=0;
  for(int i=0;i<n;i++){
      sum+=arr[i][i];
      if(i!=n-1-i){
          sum+=arr[i][n-1-i];
      }
  }
  printf("Sum of diagonals elements are %d .",sum);
    return 0;
}