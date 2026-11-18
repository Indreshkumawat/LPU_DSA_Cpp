#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,2,13,2,51,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // sort(arr,arr+n);

    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // for(int n : arr){
    //     cout<<n<<" ";
    // }

    // int key = 4;

    // int *ptr = find(arr,arr+n,key);

    // if(ptr != arr+n){
    //     cout<<"Found"<<endl;
    // }else{
    //     cout<<"not found";
    // }
    // cout<<*ptr;

    reverse(arr,arr+n);

    for(int n : arr){
        cout<<n<<" ";
    }

    cout<<endl;

    int c = count(arr,arr+n,2);

    cout<<c;

}