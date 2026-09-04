#include <iostream>
using namespace std;
int main()
{

    // double pointers -->

    // int a = 10;
    // int *p = &a;
    // int **q = &p;

    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;

    // void pointers -->

    // double x = 10;

    // void *p = &x;

    // cout<<*(static_cast<double*>(p))<<endl;

    // cout<<*(double*)p<<endl;

    // int a = 20;

    // double y = 23.8;

    // void *q;

    // q = &a;
    //  cout<<*(int*)q<<endl;
    // q = &y;

    // cout<<*(double*)q<<endl;


    // NULL pointer -->

    // int *w = NULL;

    // if(w == NULL){
    //     cout<<"Helllo";
    // }


    // Wild Pointer --> 

    // int *p;

    // cout<<*p;


  //  Dangling Pointer -->

//   int *p;

//   {
//     int a = 5;
//     p = &a;
//     cout<<*p<<endl;
//   }

//   cout<<*p;  //  p is storing the old address


//   int *q = new int(10);

//   cout<<q;

//   delete q;

//   cout<<*q;



  int x = 10;

  int &r = x;

  int *p = &r;

  r = 100;

  cout<<*p;


}