#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, flag = 0;
    cout << "Enter the elements of array:";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to be search:";
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            cout << " " << n << " is present at index " << i;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << " " << n << " is not present in the array";
    }

    return 0;
}