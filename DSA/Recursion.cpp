#include<iostream>
using namespace std;
void print(int n){
    //base condition 
    if(n <= 0){
        return;
    }

     //code
    cout<<n<<endl;

    //funciton calling 
    print(n-1);

   
 
}
int sum(int n){
    if(n == 0){
        return 0;
    }

    int ans = sum(n-1);
    ans += n;
    return ans;

    // return n + sum(n-1);
}

int fact(int n){
    if(n == 1){
        return 1;
    }

    int ans = fact(n-1);
    ans *= n;
    return ans;

    // return n * fact(n-1);
}

double power(double a,int b){
    if(b == 0){
        return 1;
    }

    double ans = power(a,b-1);
    ans *= a;
    return ans;

    // return a * power(a,b-1);
}



int main(){
  //  print(5);

  //cout<<sum(5);

  //cout<<fact(5);

  double a = -2;
  int b = -3;

  if(b < 0){
    a = 1/a;
    b = -(b);
  }
  cout<<power(a,b);

  
}