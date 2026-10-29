#include <iostream>
using namespace std;
int search(int arr[],int n,int val){
    int s = 0;
    int e = n-1;

    while(s < e){
        int mid = (s + e)/2;

        if(arr[mid] == val){
            return mid;
        }
        else if(arr[mid] < val){
            s = mid +1;
        }else{
            e = mid - 1;
        }
    }

    return -1;
}

int firstOcc(int arr[],int n,int val){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s <= e){
        int mid = (s + e)/2;

        if(arr[mid] == val){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < val){
            s = mid +1;
        }else{
            e = mid - 1;
        }
    }

    return ans;
}
int lastOcc(int arr[],int n,int val){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s <= e){
        int mid = (s + e)/2;

        if(arr[mid] == val){
            ans = mid;
            s= mid +1;
        }
        else if(arr[mid] < val){
            s = mid +1;
        }else{
            e = mid - 1;
        }
    }

    return ans;
}

int main(){
    int arr[] = {1,10,10,10,10,10};

    int n = sizeof(arr)/sizeof(arr[0]);

     int val = 10;

    // cout<<search(arr,n,val);

    cout<<lastOcc(arr,n,val);

  

}
