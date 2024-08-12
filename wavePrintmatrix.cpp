#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>ans, int n){
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
void wavePrint(vector<vector<int>>& arr,int row, int col){
    vector<int> ans;
    for(int j=0; j<col;j++){
        if(j%2 != 0){
            //odd index-> bottom to top
            for(int i=row-1; i>=0;i--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int i=0; i<row;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    
    printArray(ans,row*col);
}

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

    wavePrint(arr,3,3);
    
    return 0;
}