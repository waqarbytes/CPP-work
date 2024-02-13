#include<iostream>
using namespace std;
int findSmallest(int arr[], int n){
    int smallest = arr[0];
    for(int i=1; i<n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int arr[]={7,10,4,20,15,-4,-20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest= findSmallest(arr,n);
    cout<<"Smallest Element in the Array is:"<< smallest << endl;
      std::cout << "Programmer : Sandeep kumar" << std::endl;
    return 0;
}