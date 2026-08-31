#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,0,45,3,99,7};
    int n=7;

    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i -1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
    }

     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}