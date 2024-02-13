#include<iostream>
using namespace std;
class catdog{
    public:
    void meow(){
        cout<<"meow"<<endl;
    
    }
    void bow(){
        cout<<"bow";
    }

};
int main(){
    catdog cat,dog;
    cat.meow();
    dog.bow();
    return 0;
}
