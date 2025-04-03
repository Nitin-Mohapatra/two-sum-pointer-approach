#include <stdio.h>
int main(){
    int arrlen,target,isFound = 0;
    printf("Enter the no of element in the array: ");
    scanf("%d",&arrlen);
    printf("Enter the elements in asending order: \n");
    int arr[arrlen];
    for (int i = 0 ; i < arrlen ; i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter the target no");
    scanf("%d",&target);
    int *left,*right;
    left = arr;
    right = &arr[arrlen-1];

    while(left < right){
        int sum = *left + *right;
        if(sum == target){
            isFound = 1;
            break;
        }else if(sum < target){
            ++left;
        }else{
            --right;
        }
    }
    isFound?printf("%d + %d = %d",*left,*right,target):printf("Value cann't be achived");
    return 0;
}