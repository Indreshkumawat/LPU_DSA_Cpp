#include <iostream>
using namespace std;
int partition(int arr[], int s, int e){
    //selecting starting element as pivot
    int pivot = arr[s];
    int count =0;
    for(int i = s+1;i<=e; i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int correctIndex = s+count;
    // swap both elements
    swap(arr[s], arr[correctIndex]);

    int i = s;
    int j = e;
    while(i < correctIndex && j > correctIndex){
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        while(arr[i]<pivot){
            i++;
        }
        while(arr[i]<pivot){
            j--;
        }
    }
    return correctIndex;


}
void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int pivotIndex = partition(arr, s, e);
    quickSort(arr, s, pivotIndex -1);
    quickSort(arr, pivotIndex +1, e);
}
int main(){
    int arr[7] = {20,0,70,12,67,56,3};
    quickSort(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

}