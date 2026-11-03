#include <iostream>
#include <fstream>
using namespace std;

int main() {

   // ifstream fin("data.txt");
    fstream file("data.txt");

    if(!file){
        cout<<"it";
    }

    string str;

     file>>str;



    // char ch;

    // while(file.get(ch)){
    //     cout<<ch;
    // }

    // cout << "Character = " << ch << endl;

    file.close();

    return 0;
}