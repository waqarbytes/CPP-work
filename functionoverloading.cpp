#include<iostream>
using namespace std;

int sum(int x, int y, int z=0, int w = 0){
    return(x+y+z+w);
}

int sum(int x, int y, float z=0, float w=0){
    return(x+y+z+w);
}
int main()
{
    cout << sum (10,15,25,90)<<endl;
    cout << sum (10,15,25,20)<<endl;
      std::cout << "Programmer : Sandeep kumar" << std::endl;
    return 0;
}