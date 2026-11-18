#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main(){
   // vector<int> v = {2,4,5,7,9,10}; // container

    // vector<int>::iterator it;  // iterator


    // for(it = v.begin(); it != v.end();it++){
    //     cout<<*it<<endl;
    // }

    // for(auto it = v.begin();it != v.end();it++){
    //     cout<<*it<<endl;
    // }

    // for(int n : v){
    //     cout<<n<<" ";
    // }


    vector<int> num;

    num.push_back(10);
     num.push_back(1);
      num.push_back(12);
       num.push_back(15);
        num.push_back(23);


        // for(int x : num){
        //     cout<<x<<" ";
        // }


        // num.pop_back();

        //  for(int x : num){
        //     cout<<x<<" ";
        // }

        // cout<<num.size();

        // cout<<num.capacity();

        // cout<<num[3];

        // cout<<num.at(3);

        for(int i = 0;i<num.size();i++){
            cout<<num.at(i)<<" ";
        }
        cout<<endl;

        num.insert(num.begin()+2,24);

         for(int i = 0;i<num.size();i++){
            cout<<num.at(i)<<" ";
        }
        cout<<endl;


        num.erase(num.begin()+3);

         for(int i = 0;i<num.size();i++){
            cout<<num.at(i)<<" ";
        }

        cout<<endl;

        sort(num.begin(),num.end());

         for(int i = 0;i<num.size();i++){
            cout<<num.at(i)<<" ";
        }

        int key = 20;

        auto it  = find(num.begin(),num.end(),key);

        if(it != num.end()){
            cout<<"Val found"<<key;
        }
        else{
            cout<<"Val not found";
        }


}