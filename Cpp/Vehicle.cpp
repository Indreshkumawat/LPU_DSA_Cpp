#include <iostream>
using namespace std;

class Vehicle{
    protected:
    int noOfTyers = 2;
    int seats = 2;

     public:
    // Vehicle(int noOfTyers,int seats){
    //     this->noOfTyers = noOfTyers;
    //     this->seats = seats;
    // }

    void display(){
        cout<<"no of tyers : "<<noOfTyers<<" "<<"No of seats : "<<seats<<endl;
    }
};

class car : public Vehicle{
    public:
    void show(){
        cout<<noOfTyers<<seats;
    }
};
int main(){

    car c;

    c.display();
    c.show();

}