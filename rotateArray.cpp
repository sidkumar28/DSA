#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>& nums, int k){
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
}
void printArray(vector<int>& nums, int n){
    for(int i=0;i<n;i++){
        cout<<" "<<nums[i];
    }
}

int main(){
    vector<int> nums={-1,-100,3,99};
    rotateArray(nums,2);
    printArray(nums,4);
    return 0;
}