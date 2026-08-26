
#include <iostream>
using namespace std;
int firstOcc(int arr[],int n,int val){
    int s = 0;
   int e = n-1;

   int index = -1;
   while(s <= e){
    int mid = (s + e)/2;
    if(arr[mid] == val){
        index = mid;
        e = mid -1;
    } else if(arr[mid] < val){
        s = mid + 1;
    }else{
        e = mid -1;
    }
   }

   return index;
}
int  binarySearch(int arr[],int n,int val){
   int s = 0;
   int e = n-1;

   while(s <= e){
    int mid = (s + e)/2;

    if(arr[mid] == val){
        return mid;
    }
    else if(arr[mid] < val){
        s = mid + 1;
    }else{
        e = mid -1;
    }
   }

   return -1;
}
int main(){
    int arr[] = {7,7,7,9,10,12};

    int n = sizeof(arr)/sizeof(arr[0]);
    int index = firstOcc(arr,n,10);

    cout<<index;

   
}