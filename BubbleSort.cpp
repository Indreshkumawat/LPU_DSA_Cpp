#include<iostream>
using namespace std;
int main(){
    int arr1[] = {2,1,0,45,3,99,7};
    int n=7;
    for(int i=1;i<n-i;i++){
        for(int j=1;j<n;j++){
            if(arr1[j] < arr1[j-1]){
                int temp = arr1[j];
                arr1[j] = arr1[j-1];
                arr1[j-1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}