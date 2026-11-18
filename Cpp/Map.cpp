#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    map<char,string> mp;

    mp['a'] = "Indresh";
    mp['b'] = "Arnav";
    mp['c'] = "Krish";
    mp['d'] = "yash";

    // cout<<mp['a']<<endl;
    // cout<<mp['d']<<endl;

     int i = 1;
     for(auto x : mp) {

    if(i== 2){
        cout<<x.first<<" "<<x.second;
        break;
    }

    i++;

     //   cout<<x.first<<" "<<x.second<<endl;
    }
}