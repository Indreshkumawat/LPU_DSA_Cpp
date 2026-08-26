#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<<"Enter the numbers of values u want in array that should be less than index  9: ";
    cin>>n;
    cout<<"Enter"<<n<< "numbers:";
    for(int i = 0; i <= n; i++){
        cin>>arr[i];
    }


    int index;
    cout<<"Enter the index on which you want to insert val: ";
    cin>>index;

    int val;
    cout<<"Enter the value you want to insert: ";
    cin>>val;

    for(int i = n;i >= index;i--){
        arr[i+1] = arr[i];
    }

    arr[index] = val;

    n++;

    for(int i = 0; i <= n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}