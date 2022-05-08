#include<stdio.h>

/*
    Array Operations
    1.display()
    2.add(x)/ Append(x)
    3.insert(index,x)
    4.delete(index)
    5.search(x)
    6.get(index)
    7.set(index,x)
    8.max()/min()
    9.Reverse()
    10.shift()/rorate()
*/

// Global varibales
int arr[20] = {2,3,55,44,26,1};
const int size = 20;
int length = 6;

void display(){
    printf("Elements in array:\n");
    for (int i = 0; i < length; i++){
        printf("%d element at %d position\n",arr[i], i);
    }
}

void append(int element){
    arr[length] = element;
    length++;
}

void insert(int index,int element){
    int tmp = arr[index];
    arr[index] = element;
    arr[length] = tmp;
    length++;
}
void delete(int index){
    printf("INdex=%d",index);
    if (index == length){
        arr[length] = 0;
        
    }else{
        for (int i = index; i < length; i++){
            arr[i] = arr[i+1];
        }
    }
    length--;

}

int search(int element){
    for (int i = 0; i < length; i++){
        if (arr[i] == element){
            return i;
        }
    }
    return -1;
}

int get(int index){
    return arr[index];
}

void set(int index,int element){
    arr[index] = element;
    printf("Set successful!!\n");
}

int max(){


    int max = arr[0];
    for (int j = 1; j < length; j++){
        if (arr[j] > max){
            max = arr[j];
            // break;
        }
    }
    return max;
}

int min(){

    int min = arr[0];
    for (int j = 1; j < length; j++){
        if (arr[j] < min){
            min = arr[j];
        }
    }

    return min;
}

void reverse(){
    int i,j,tmp;
    for (i = 0,j = length-1;i < j; i++,j--){
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
    }  
}

void shift(){
    for (int i = 1; i < length;i++){
        arr[i-1] = arr[i];
    }
    arr[length-1] = 0;
    length--;

}

void rotate(){
    int first_ele = arr[0];
    for (int i = 1; i < length;i++){
        arr[i-1] = arr[i];
    }
    arr[length-1] = first_ele;

}

int main(){
    int choice,index,element;
    while(1){
        printf("Enter your choice\n");
        printf("------------------\n");
        printf("1. Display()\n");
        printf("2. Append(x)/Add(x)\n");
        printf("3. Insert(index,x)\n");
        printf("4. Delete(index)\n");
        printf("5. search(x)\n");
        printf("6. get(index)\n");
        printf("7. set(index,x)\n");
        printf("8. max()\n");
        printf("9. min()\n");
        printf("10. reverse()\n");
        printf("11. shift()\n");
        printf("12. rotate()\n");
        printf("0. Exit out of programm\n");
        printf("------------------\n");
        scanf("%d",&choice);
        if (choice == 0)
            break;

        switch (choice){
        case 1:
            display();
            break;
        case 2:
            if (length <= size){
                printf("Enter the element(int) value: ");
                scanf("%d",&element);
                append(element);
            }else
                printf("array is full, delete atleast one element\n");
            
            break;
        case 3:
            printf("Enter the index: ");
            scanf("%d",&index);
            if (index <= length){
                printf("Enter the element(int) value: ");
                scanf("%d",&element);
                insert(index,element);
            }else
                printf("Please select a index within 0-%d\n",length);
            break;
        case 4:
            printf("Enter the index: ");
            scanf("%d",&index);
            if (index <= length){
                delete(index);
            }else
                printf("Please select a index within 0-%d\n",length);
            break;
        case 5:
            printf("Enter the element you want to search: ");
            scanf("%d",&element);
            index = search(element);
            if (index != -1)
                printf("%d is found on %d position in array\n", element, arr[index]);
            else
                printf("Element not in array\n");
            break;
        case 6:
            printf("Enter the index for element you want to get: ");
            scanf("%d",&index);
            if (index <= length)
                printf("Element %d is found on index %d",get(index),index);
            else
                printf("Valid index length 0-%d",length);
            break;
        case 7:
            printf("Enter the index for element you want to set: ");
            scanf("%d",&index);
            if (index <= length){
                printf("Enter new value for index %d : ",index);
                scanf("%d", &element);
                set(index,element);
            }
            else
                printf("Valid index length 0-%d",length);
            break;
        case 8:
            printf("Max value in array is: %d\n",max());
            break;
        case 9:
            printf("Min value in array is: %d\n",min());
            break;
        case 10:
            reverse();
            printf("Done!!!\n");
            break;
        case 11:
            shift();
            printf("Done!!!\n");
            break;
        case 12:
            rotate();
            printf("Done!!!\n");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    }

    return 0;
}
