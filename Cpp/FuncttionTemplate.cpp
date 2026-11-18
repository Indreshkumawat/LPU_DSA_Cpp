#include<iostream>
using namespace std;
template<typename T>

// if you need to take two different parameters-> template<typename T1, typename T2>

// T findMax(T a, T b){
//     if(a<b){
//         return b;
//     }
//     else{
//         return b;
//     }
// }

//swap

// void swapping(T &a, T &b){
//     T ans1 = a;
//     a = b;
//     b = ans1;
// }

T arraySum(T arr[], T n){
    T sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    // cout<<findMax(20, 34)<<endl;
    // cout<<findMax('Z', 'b')<<endl;
    // int a = 30;
    // int b = 40;
    // cout<<a<<" "<<b<<endl;
    // swapping(a,b);
    // cout<<a<<" "<<b<<endl;
    // double c = 12.45;
    // double d = 34.78;
    // cout<<c<<" "<<d<<endl;
    // swapping(c,d);
    // cout<<c<<" "<<d<<endl;

    int arr[] = {1,2,3,4,5};
    cout<<arraySum(arr, 5)<<endl;
}