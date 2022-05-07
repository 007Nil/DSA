#include <stdio.h>

#define LENGTH 11

void binary_search_res (int *arr, int low, int high,int se){
    int mid;
    if (low <= high ){
        mid = (low+high)/2;

        if (arr[mid] == se){
            printf("%d found at %d position\n", se, mid);
        }
        else if (arr[mid] > se){
            high = mid -1;
            binary_search_res(arr,low,high,se);
        }
        else{
            low = mid+1;
            binary_search_res(arr,low,high,se);
        }
    }

}


void binary_search(int *arr, int se){
    // for (int i = 0; i < len; i++){
    //     printf("%d\n",arr[i]);
    // }
    int low = 0;
    int high = LENGTH-1;
    int mid;

    while(low <= high){
        // printf("%d\n",low);
        // low++;
        mid = (low+high)/2;
        if (arr[mid] == se){
            printf("%d found at %d position\n", se, mid);
            break;
        }
        else if (arr[mid] > se)
            high = mid -1;
        else
            low = mid + 1;
    }
}

int main(){
    int se;
    int arr[LENGTH] = {2,4,7,24,33,35,40,55,60,100,102};
    scanf("%d", &se);
    binary_search(arr,se);
    binary_search_res(arr,0,LENGTH,se);
    return 0;
}