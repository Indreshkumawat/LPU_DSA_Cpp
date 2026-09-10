#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,81,3},
                    {4,51,6},
                    {7,81,8}
                   };

   int maxi = arr[0][0];
   int maxiRow = 0;
   int maxiCol = 0;
 for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        if(arr[i][j] >= maxi){
            maxi = arr[i][j];
            maxiRow = i;
            maxiCol = j;
        }
    }
 }  
 int n = 3; 
 int sumD1 = 0;
 int sumD2 = 0;
 for(int i = 0;i<3;i++){
    sumD1 += arr[i][i];
    sumD2 += arr[i][n-i-1];
 }
//  cout<<sumD1<<sumD2;


 string s = "i am good";

 //tolower();

 int vowelcount = 0;
 int spaces = 0;
 int cons = 0;

 for(int i = 0;i<s.size();i++){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u'){
        vowelcount++;
    }else if(s[i] == ' '){
        spaces++;
    }else{
        cons++;
    }
 }

 cout<<vowelcount<<cons<<spaces;

 
 //cout<<"Maximum element is : "<<maxi<<" at ("<<maxiRow<<","<<maxiCol<<")"; 
                
                
                
}