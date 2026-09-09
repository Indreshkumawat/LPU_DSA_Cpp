#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,8}
                   };

int sum = 0;
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         sum += arr[i][j];
    //     }
        
    // }

    // cout<<sum;

     for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }

        cout<<"sum of"<<i<<"th row is : "<<sum<<endl;
        
    }

    // find the sum of the matrix ..

    // print the sum of each row and each column 

}