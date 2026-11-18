#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
  list<int> l = {2,3,4,56};

  l.push_back(24);
  l.push_front(2);

  for(auto n : l){
    cout<<n<<" ";
  }

//   list<int>::iterator it;
//   for(auto it = l.begin();it != l.end();it++){

  //}


  auto it = l.begin();

  advance(it,2);

  l.insert(it ,222);

  cout<<endl;
for(auto n : l){
    cout<<n<<" ";
  }

  it = l.begin();


  advance(it,4);

  l.erase(it);


for(auto n : l){
    cout<<n<<" ";
  }

  l.sort();



}