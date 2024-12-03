#include <stdio.h>

int linearsearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
    if(arr[i] == key){
        return i;
    }
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,7,9,6,5,9,69,96,100,45,203,999,666};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 69;

    int result = linearsearch(arr, n, key);

    if (result!=-1){
        printf("%d found at index %d", key, result);
    } else {
        printf("Element %d not found in given array", key);
    }
    return 0;
}
