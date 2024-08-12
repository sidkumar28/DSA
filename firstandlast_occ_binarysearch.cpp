#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key ){
    int s=0;
    int e = n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid] < key){
            s= mid + 1 ;
        }
        else if (arr[mid]>key){
            e= mid -1;
        }
        mid= s + (e-s)/2;
    } 
    return ans;
}
int lastOcc(int arr[], int n, int key ){
    int s=0;
    int e = n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid] < key){
            s= mid + 1 ;
        }
        else if (arr[mid]>key){
            e= mid -1;
        }
        mid= s + (e-s)/2;
    } 
    return ans;
}

int main()
{

    int set[10]={1,2,3,3,3,3,3,3,4,5};
	
    cout<<"first occurence of 3 is"<<firstOcc(set,10,3)<<endl;
    cout<<"last occurence of 3 is"<<lastOcc(set,10,3)<<endl;
    
    cout<<"total no. of occurance="<<(lastOcc(set,10,3)-firstOcc(set,10,3))+1;
    return 0;
}