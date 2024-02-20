#include<stdio.h>
void subary(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("(");
            for(int k=i;k<=j;k++){
                printf("%d ",a[k]);
            }
            printf(") ");
        }
        printf("\n");
    }
}
int main() {
    printf("Printing Subarrays\n");
    int num[6]={1,2,3,4,5,6};
    subary(num,6);
}