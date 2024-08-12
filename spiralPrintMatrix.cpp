#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>ans, int total ){
    for(int i=0;i<total;i++){
        cout<<ans[i]<<" ";
    }
}
void spiralMatrix(vector<vector<int>> arr, int row, int col){

    vector<int> ans;
    int count=0;
    int total=row*col; 
    int sRow=0;
    int sCol=0;
    int eRow=row-1;
    int eCol=col-1;

    while(count<total){
        // Print first row from start to end.
        for(int j=sCol;count<total && j<=eCol;j++){
            ans.push_back(arr[sRow][j]);
            count++;
        }
        sRow++;  // Move to next row.

        //Print last col
        for(int i=sRow;count<total && i<=eRow;i++){
            ans.push_back(arr[i][eCol]);
            count++;
        }
        eCol--;
        
        //Print last row
        for(int j=eCol;count<total && j>=sCol;j--){
            ans.push_back(arr[eRow][j]);
            count++;
        }
        eRow--;

        //print first column    
        for(int i=eRow;count<total && i>=sRow;i--){
            ans.push_back(arr[i][sCol]);
            count++;
        }
        sCol++;

    }

    printArray(ans,total);
    
}



int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6,},{7,8,9}};
    spiralMatrix(arr,3,3);
    return 0;
}
