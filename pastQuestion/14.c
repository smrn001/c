// find second largest element in an array

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0], max2 = -1;
    for(int i=1; i<n; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    if(max2 == -1){
        printf("There is no second largest element in the array\n");
    }
    else{
        printf("The second largest element in the array is: %d\n", max2);
    }
    return 0;
}