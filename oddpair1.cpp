#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int count=0;
    cin>>n;
    for(int i=-1;i<=n; i++){
        for(int j=0;j<i;j++){
            int r=i+j;
            if(i>=-1 && j<=n && r%2!=0){
                count++;
            }
            else{

            }
        } 
        
    }
    cout<<count;
    return 0;
}
