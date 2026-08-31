#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,3,5,8,10,15,20,25};
    int arr2[] = {2,5,6,12,16,24,33,38,40};

    int i = 0;
    int j = 0;
    int w = 0;

    int m = 8;
    int n = 9;
    int res[m+n];

    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            res[w] = arr1[i];
            i++;
            w++;
        }
        else{
            res[w] = arr2[j];
            j++;
            w++;
        }

    }
    while (i<m){
        res[w] = arr1[i];
        i++;
        w++;
    }
    while (j<n){
        res[w] = arr2[j];
        j++;
        w++;
    }
    for(int i=0; i<n+m; i++){
        cout<<res[i]<<" ";
    }
}