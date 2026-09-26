#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream a("data.txt");
    
    // a<<"Hello world"<<endl;
    // a<<"I am good what about u!!!"<<endl;

    // int var = 200;

    // a<<var;

    // ifstream b;

    // b.open("data.txt");

    // if(!b){
    //     cout<<"file is not there";
    // }else{
    //     cout<<"file is there"<<endl;
    // }
    // b.close();

    ofstream fout;
    
    fout.open("StudentDetails.txt");

    fout<<"Indresh"<<endl;
    fout<<101<<endl;
    fout<<200;
    fout<<"LPU collge";


    fout.close();

    ifstream fin("StudentDetails.txt");


    string name;
    int id;
    int marks;
    string address;
    
    while(fin>>name>>id>>marks>>address){
        cout<<name<<" ";
        cout<<id<<" ";
        cout<<marks;
        cout<<address;

    }

    fin.close();

}
