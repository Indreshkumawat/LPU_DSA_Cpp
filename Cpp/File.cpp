#include <iostream>
#include <fstream>
using namespace std;

int main() {

   // ifstream fin("data.txt");
    fstream file("data.txt", ios::in | ios::out);

    char ch;

    while(file.get(ch)){
        cout<<ch;
    }

    // cout << "Character = " << ch << endl;

    file.close();

    return 0;
}