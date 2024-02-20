#include <stdio.h>
int main(){
    printf("Printing Elements in spiral form .\n");
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
  int sum=0;
  for(int j=0;j<m;j++){sum+=arr[0][j];}
  for(int i=1;i<n;i++){sum+=arr[i][m-1];}
  for(int j=m-2;j>=0;j--){sum+=arr[n-1][j];}
  for(int i=n-2;i>0;i--){sum+=arr[i][0];}
  printf("Sum of Boundary elements of an array are %d .",sum);
  return 0;
}