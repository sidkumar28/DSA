#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }    
    return -1;
}

int binarysearch(int arr[], int n, int key){
    int low=0;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return -1;
}
int main(){

    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int key;
    int arr[n];
    cout<<"enter array";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Enter key:";
    
    cin>>key;
   
    //cout<<search(arr,n,key);
    cout<<binarysearch(arr,n,key);
}