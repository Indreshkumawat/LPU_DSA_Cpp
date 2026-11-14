#include <iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e){
    int i = s;
    int j = mid+1;
    int m = mid;
    int n = e;
    int temp[100];
    int k = 0;
    while(i<=m && j<= n){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=n){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int x = 0; x<k; x++){
        arr[x+s] = temp[x];
    }
}
void mergeSort(int arr[], int s, int e){
    if(s<e){
        int mid = (s+e)/2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s, mid, e);
    }
}
int main(){
    int arr[7] = {20,0,7,12,67,56,3};
    mergeSort(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

}