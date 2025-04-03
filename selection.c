#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n],temp;
    for(int i=0; i<n; i++){
        printf("Enter %d El: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("unsorted el: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}