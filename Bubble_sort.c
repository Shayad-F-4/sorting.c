#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n val: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d el : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n-1;i++){
        int is_swap=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                is_swap=1;
            }
        }
       printf("Pass %d : ",i+1);
        for(int k=0;k<n;k++){
          printf("%d ",arr[k]);
       }
    printf("\n");
    if(is_swap==0) break;
    }
    printf("\n\n");
    printf("Sorted Array Is : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
