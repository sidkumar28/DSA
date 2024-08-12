#include<iostream>
using namespace std;


int peakValue(int arr[],int k){
    int s=0;
    int e= k-1;
    int mid= s+(e-s)/2;
    while (s<e){
        if(arr[mid] < arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return arr[mid];
}
int main()
{
    int set[4]={0,1,5,0};
    cout<<"peak value="<<peakValue(set,4);
	return 0;
}