#include<iostream>
#include<vector>
using namespace std;

int rotatedAndSorted(vector<int>& arr){

    int count=0;
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;

    return count<=1;
    }

}

int main(){
    vector<int> arr={3,4,5,1,2};
    cout<<rotatedAndSorted(arr);
    return 0;
}