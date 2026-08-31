#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,0,45,3,99,7};
    int n=7;
    
    for(int i = 0;i<n-1;i++){
        int miniIndex = i;
        for(int j = i +1;j<n;j++){
            if(arr[j] < arr[miniIndex]){
                miniIndex = j;
            }
        }
        swap(arr[i],arr[miniIndex]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}