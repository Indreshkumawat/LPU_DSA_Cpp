#include<iostream>
using namespace std;
class Number{
    int val;

    public:
    Number(int v){
        val = v;
    }

    Number operator -(){
        Number ans(-val);
        return ans;
    }

    void operator ++(){
        // ++this->val; // both ways are same
        ++val;
    }
    void operator --(){
        // --this->val; // both ways are same
        --val;
    }


    //postfix ++
    Number operator ++(int){
        Number ans = *this;
        val++;
        return ans;
    }
    void display(){
        cout<<val<<endl;
    }
};
int main(){
    Number n1(20);

    // Number n2 = -n1;
    // n2.display();
    // n1.display();
    

    // ++n1;

    // n1.display();

    // --n1;

    // --n1;
    // n1.display();

    Number n2 = n1++;
    n1.display();
    n2.display();
}