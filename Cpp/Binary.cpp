#include <iostream>
#include <fstream>
using namespace std;
class Student{
    public:
    string name;
    int rollNo;
    int marks;
    void input(){
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter rollNo :"<<endl;
        cin>>rollNo;
        cout<<"enter marks :"<<endl;
        cin>>marks;
    }
    void display(){
        cout<<name<<" "<<rollNo<<" "<<marks<<endl;
    }
};
int main(){
    // int number = 500;

    // ofstream fout("number.dat",ios::binary);


    // fout.write((char*)&number,sizeof(number));

    // fout.close();

    // int newNumber;

    // ifstream fin("number.dat",ios::binary);

    // fin.read((char*)&newNumber,sizeof(newNumber));


    // cout<<newNumber;

    // fin.close();

    Student s;

    // ofstream  fout("student.dat",ios::binary);

    // cout<<"enter the details for 3 students : "<<endl;

    // for(int i = 0;i<3;i++){
    //     s.input();

    //     fout.write((char*)&s,sizeof(s));
    // }
    // fout.close();

    //sequential 

    ifstream fin("student.dat",ios::binary);

    // cout<<"Details of all Students: "<<endl;

    // while(fin.read((char*)&s,sizeof(s))){
    //     s.display();
    // }

    // random access

    int studentNumber;

    cout<<"give me the number: "<<endl;

    cin>>studentNumber;

    long long pos = (studentNumber -1)*sizeof(Student);

    fin.seekg(pos,ios::beg);

    fin.read((char*)&s,sizeof(s));

    if(fin){
        cout<<"details"<<endl;
        s.display();
    }else{
        cout<<"file not exist";
    }

    fin.close();


}