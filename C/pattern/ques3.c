#include<stdio.h>
int main(){
    int n=5 ;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int k=0;k<n-i;k++){
            printf("  ");
        }
        for(int j=i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}