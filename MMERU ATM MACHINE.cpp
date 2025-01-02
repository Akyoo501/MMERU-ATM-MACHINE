#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int p;
    int pin = 1243;
    int diposit = 0.0;
    int balance = 0.0;
    int withdraw = 0.0;
    int choice;
    int count = 0;
    bool isTrue = true;

    cout<<endl;

    cout<<" * * * WELCOME TO MMERU ATM MACHINE * * * "<<endl<<endl;

    do{


        cout<<"Enter your Pin to Login: ";
        cin>>p;

        cout<<endl;

        if(p == pin){
                do{

                    cout<<"   "<<"     Account Dashboard    "<<endl;
            cout<<"   "<<"| ----------------------- |"<<endl;
            cout<<"   "<<"| 1.Deposit Your Money    |" <<endl;
            cout<<"   "<<"| 2.Check Your Balance    |" <<endl;
            cout<<"   "<<"| 3.Withdraw Your Money   |" <<endl;
            cout<<"   "<<"| 4.Change Your Pin       |" <<endl;
            cout<<"   "<<"| 5.Log out               |" <<endl;
            cout<<"   "<<"| ----------------------- |"<<endl<<endl;

            cout<<"Enter Your Choice: ";
            cin>>choice;

            cout<<endl;
    
    return 0;
}
