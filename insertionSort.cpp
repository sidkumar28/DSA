#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){

        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={1,10,7,4,8,2,11};
    insertionSort(arr,7);
    printArr(arr,7);
    return 0;
}