#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

class HashTable{
    int size;
    vector<list<int>> table;
    int hashFx(int key){
        return key%size;
    }
    public:
    HashTable(int s){
        size = s;
        table.resize(s);
    }
    // int hashFx(int key){
    //     return key%size;
    // }
    void insert(int key){
        int index = hashFx(key);
        table[index].push_back(key);
        cout<<"Inserted "<<key<<" at Index "<<index<<endl;
    }

    bool searchKey(int key){
        int index = hashFx(key);
        // cout<<index;
        for(int val: table[index]){
            if(val == key){
                cout<<"Key: "<<key<<" found on index "<<index;
                return true;
            }
        }
        return false;
    }
    void removeKey(int key){
        int index = hashFx(key);
        table[index].remove(key);
        cout<<"Deleted "<<key<<" from index "<<index<<endl;
    }
    void display(){
        int size;
        for(int i=0; i<size; i++){
            cout<<i<<"-> ";
            for(int x:table[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    HashTable h(10);
    h.insert(22);
    h.insert(77);
    bool isPresent = h.searchKey(22);
    if(isPresent){
        cout<<endl;
        cout<<"Key found"<<endl;
    }else{
        cout<<endl;
        cout<<"not found";
    }
    h.removeKey(22);
    h.display();
}
