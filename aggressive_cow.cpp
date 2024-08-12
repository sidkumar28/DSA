#include<iostream>
using namespace std;

int isPossible(int arr[], int n,int k, int mid, int mini){
    int cowCount=1;
    int lastPos= mini;

    for (int i = 0; i <n ; i++) {
        if (arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
        }
        
    }
    return false;
}



int agressiveCow(int arr[], int n, int k){
    
    int s=0;
    int maxi=-1;
    int mini=1;

    for(int i=0; i<n; i++){
        maxi= max(maxi,arr[i]);
    }

    for(int i=0; i<n;i++){
        mini=min(mini,arr[i]);
    }
    
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(isPossible(arr,n,k,mid,mini)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[5]={4,2,1,3,6};
    cout<<agressiveCow(arr,5,2);
    return 0;

}