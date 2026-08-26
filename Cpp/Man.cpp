#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    // long long a = 234985;

    // cout<<"Before doing setw: "<<a<<endl;

    // // cout<<"after setting width :"<<setw(5)<<a;

    // cout<<setfill('-')<<setw(10)<<a;

    // double price = 12.1234567;

    // cout<<fixed<<setprecision(4)<<price;

    string item1 = "Pen";
    string item2 = "Laptop";
    string item3 = "Keyboard";
    int qty1 = 2;
    int qty2 = 1;
    int qty3 = 2;

    double price1 = 25;
    double price2 = 50000;
    double price3 = 1500;

    double total = (qty1*price1) + (qty2*price2) + (qty3*price3);

    cout<<setfill('=')<<setw(40)<<"="<<endl;
    cout<<setfill(' ')<<setw(25)<<"Bill"<<endl;
    cout<<setfill('=')<<setw(40)<<"="<<endl;

    cout<<setfill(' ');
    cout<<left<<"Item"<<setw(16)<<right<<setw(8)<<"Qty"<<setw(14)<<"Price"<<endl;

    


    
}