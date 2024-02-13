#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));

    int userInput;
    cout<<"enter a number:";
    cin>> userInput;

    int randomNumber= rand() % 7 + 1;

    cout << "Generted number :" << randomNumber << endl;
     string dayName;
     switch (randomNumber){
        case 1:
           dayName = "Sunday";
           break;
        case 2:
           dayName = "Monday";
           break;
        case 3:
           dayName = "Tuesday";
           break;
        case 4:
           dayName = "Wednesday";
           break;
        case 5:
           dayName = "Thursaday";
           break;
        case 6:
           dayName = "Friday";
           break;
        case 7:
           dayName = "Saturaday";
           break;
        default:
           dayName = "Invalidday";
           break;
     }
       cout<<"Corresponding day:"<< dayName<< endl;
  std::cout << "Programmer : Sandeep kumar" << std::endl;
    return 0;
}