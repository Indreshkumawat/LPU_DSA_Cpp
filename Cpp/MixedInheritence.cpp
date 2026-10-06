#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"IN vehicle"<<endl;
    }
    ~Vehicle(){
        cout<<"v destructor"<<endl;
    }
    void show(){
    cout<<"I am in vehicle";
    }
};

class Bike : public Vehicle{
    public:
     Bike(){
        cout<<"IN Bike"<<endl;
    }
    ~Bike(){
        cout<<"Bike destructor"<<endl;
    }
    void bikediplay(){
        cout<<"I am in bike";
    }
};

class BMWBike : public Bike{
    public:
     BMWBike(){
        cout<<"IN BMWBike"<<endl;
    }
    ~BMWBike(){
        cout<<"BMWBike destructor"<<endl;
    }
    void BMWDis(){
        cout<<"I am in BMWBike";
    }
};
class BMWHigh: public BMWBike{
    public:
     BMWHigh(){
        cout<<"IN BMWHigh"<<endl;
    }
    ~BMWHigh(){
        cout<<"BMWHigh des"<<endl;
    }
};

int main(){
    BMWHigh b1;

}