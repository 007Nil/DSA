#include<stdio.h>

#define LENGTH 12


void imp_transpotion(int *arr,int index){\
    if (index != 0){
        int tmp = arr[index];
        arr[index] = arr[index-1];
        arr[index-1] = tmp;
    }
}

void move_to_first(int *arr, int index){
    if (index != 0){
        int tmp = arr[index];
        arr[index] = arr[0];
        arr[0] = tmp;

    }
}

void display(int *arr){
    int i = 0;
    while (i < LENGTH){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

void liner_search(int *arr,int se){
    for (int i = 0; i < LENGTH; i++){
        if (arr[i] == se){
            printf("%d found at %d position\n", se, i);
            // imp_transpotion(arr,i);
            move_to_first(arr,i);
            return;
        }
    }
    printf("%d not in the array\n", se);
}

int main(){
    int se;
    int arr[LENGTH] = {3,4,5,2,1,0,99,7,6,5,23,55};
    while(1){
    scanf("%d",&se);
    liner_search(arr,se);
    }

    return 0;
}