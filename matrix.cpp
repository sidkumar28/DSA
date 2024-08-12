#include<iostream>
using namespace std;

void printColSum(int arr[][3],int row, int col){
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void printRowSum(int arr[][3],int row, int col){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void largestRowNumber(int arr[][3], int row, int col){
    int maxi= INT8_MIN;

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;

        }
    }
    cout<< maxi;
}
bool isPresent(int arr[][3],int tar, int row, int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==tar){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }

    cout<<"Enter a numer:";
    int tar;
    cin>>tar;
    if(isPresent(arr,tar,3,3)){
        cout<<"Number found"<<endl;
    }
    else{
        cout<<"Not Found";
    }

    printRowSum(arr,3,3);
    cout<<"largest row sum:";
    largestRowNumber(arr,3,3);


    return 0;
}