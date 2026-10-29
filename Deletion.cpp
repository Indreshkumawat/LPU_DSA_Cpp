#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,8,9,12};
    int n = 6;

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int index;
    cout<<"Enter the index which u want to delete : "<<endl;
    cin>>index;
    
    for(int i= index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}