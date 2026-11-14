#include <iostream>

using namespace std;

int TOH(int n,char source,char helper,char destination){
    if(n == 1){
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return 1 ;
    }

    int x = TOH(n-1,source,destination,helper);
    cout<<" Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    x++;
    int y = TOH(n-1,helper,source,destination);

    return x + y;

}

int main(){
    int n;
    cin>>n;

    cout<<TOH(n,'A','B','C');
}