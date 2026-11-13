#include <iostream>
using namespace std;

// Heap :- a heap is a complete binary tree which follows properties of heap 
// Types of heap -> min heap , max heap
// root is largest element 
// left -> 2*i + 1, right -> 2*i+2 , parent -> i-1 / 2

class Heap{
     
    
    int size;  // currently how many elements are present in array
    int arr[100]; // capacity of array
    public:
    Heap(){
        size = 0;
    }
    void insert(int val){
        arr[size] = val;
        int index = size;
        size++;
        while(index > 0){
            int parent = (index-1)/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                break;
            }
        }

    }

    void heapify(int nums[],int n,int index){

        int left = 2 * index + 1;
        int right = 2 * index +2;

        int largest = index;
        if(left < n && nums[largest] < nums[left]){
            largest = left;
        }
        if(right < n && nums[largest] < nums[right]){
            largest = right;
        }

        if(largest != index){
            swap(nums[largest],nums[index]);
            heapify(nums,n,largest);
        }
    }
    void heapSort(int nums[],int n){
        for(int i = n/2-1; i>= 0; i--){
            heapify(nums,n,i);
        }
        for(int i = n-1;i>0;i--){
            swap(nums[0],nums[i]);
            heapify(nums,i,0);
        }
        
    }
    void show(){
        for(int i = 0; i<size;i++){
            cout << arr[i] <<" ";
        }
    }

    // deletion

int deleteHeap(){
    int ans = arr[0];
    // step 1
    arr[0] = arr[size-1];
    size--;
    int index = 0;
    while(index < size){
        int left = (2*index) + 1;
        int right = (2*index) + 2;

        int largest = index;
        if(left<size && arr[largest]< arr[left]){
            largest = left;
        }
        if(left<size && arr[largest]< arr[right]){
            largest = right;
        }
        if(index == largest){
            return ans;
        }
        swap(arr[index], arr[largest]);
        index = largest;

    }
}
};


int main(){
     Heap h1;
     h1.insert(10);
     h1.insert(60);
     h1.insert(30);
     h1.insert(20);
     h1.insert(90);
     h1.insert(100);
     h1.show();
     cout<<endl;
     cout<<h1.deleteHeap()<<endl;
     h1.show();

     int nums[10] = {3,1,10,19,12,16,2,18,21,19}; 
     int n = 10;
     int s = n/2 - 1;

    //  for(int i = s;i >= 0;i--){
    //     h1.heapify(nums,n,i);
    //  }

    //  for(int i = 0;i<n;i++){
    //     cout<<nums[i]<<" ";
    //  }
    
    h1.heapSort(nums,10);

     for(int i = 0;i<n;i++){
        cout<<nums[i]<<" ";
     }
     
}