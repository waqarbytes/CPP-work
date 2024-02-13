#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    double bal=1000.0;
    try{
        double amt;
  cout<<"Enter Deposit Amount:";
  cin>>amt;
  if (amt<=0){
// cout<<"Invalid Deposit Amount:"<<endl;
 throw invalid_argument("Invalid Deposit Amount:")<<endl;
  }
  bal=bal+amt;
  cout<<"Available Amount:"<<bal;
//   Withdrawal amount
  cout<<"Enter Withdrawn Amount:"<<endl;
  cin>>amt;
  if (amt<=0){
     throw invalid_argument("Invalid withdrawn Amount:")<<endl;
    // cout<<"Invalid Withdrawn Amount:"<<endl;
  }
  if(amt>bal){
    // cout<<"Insufficient Fund:"<<endl;
    throw runtime_error("Insufficient Fund:")<<endl;
  }
  bal=bal-amt;
  cout<<"Available Amount:"<<bal;

    }
    catch(const& e){
        cout<<"e.what():"<<endl;

    }
    return 0;
}