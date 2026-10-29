#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i = 1;i<n;i++){
        if(arr[i] <arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {5,5,5,5,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    bool res = isSorted(arr,n);

    if(res){
        cout<<"sorted"<<endl;
    }else{
        cout<<"Unsorted";
    }
}