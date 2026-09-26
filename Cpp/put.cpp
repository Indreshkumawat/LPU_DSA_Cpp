#include <iostream>
#include <fstream>
using namespace std;
int main(){
//     ifstream f("name.txt");

//    string name;

//     //f>>name;

// //    char ch;

// //    while(f.get(ch)){
// //     cout<<ch;
// //    }
//    while(getline(f,name)){
//     cout<<name;
//    }

//   // cout<<name;

//     f.close();


ifstream fin("name.txt");

// cout<<"Postion = "<<fin.tellg()<<endl;

// char ch;

// fin.get(ch);

// cout<<ch;

// cout<<"Postion = "<<fin.tellg()<<endl;

// fin.close();

// fin.seekg(3);

// char ch;

// while(fin.get(ch)){
//     cout<<ch<<endl;
// }
// //fin.get(ch);

// //cout<<ch<<endl;

// fin.close();

 fstream fout("name.txt",ios::in | ios::out);

//  cout<<"Position = "<<fout.tellp()<<endl;

//  fout<<"Indresh";

//   cout<<"Position = "<<fout.tellp()<<endl;

if(!fout){
    cout<<"file not there";
}

fout.seekp(2);

fout<<"hello";

fout.close();

}
