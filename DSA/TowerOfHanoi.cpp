#include <iostream>
using namespace std;

int towerOfHanoi(int n,char source,char helper,char destination){
    if(n == 1){
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return 1;
    }

    int x = towerOfHanoi(n-1,source,destination,helper);

    x++;
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;

    int y = towerOfHanoi(n-1,helper,source,destination);

    return x + y;
}
int main(){
    int count  = towerOfHanoi(3,'A','B','C');
}