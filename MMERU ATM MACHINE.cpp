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

                    switch(choice){
            case 1:
                cout<<"Enter amount for Deposit: $";
                cin>>diposit;
                balance = balance + diposit;
                cout<<endl;
                cout<<"Successfully Amount Deposited."<<endl<<endl;
                break;

            case 2:
                cout<<"Your Balance is: $"<<balance<<endl<<endl;
                break;

            case 3:
                cout<<"Enter amount to withdraw: $";
                cin>>withdraw;
                cout<<endl;
                balance = balance - withdraw;
                if(withdraw>balance){
                    cout<<"Sorry!!! You have sufficient amount to withdraw."<<endl;
                    cout<<"Please check your balance and try again."<<endl<<endl;
                }
                else{
                cout<<"Successfully Amount withdraw."<<endl<<endl;
                }
                break;
    
    return 0;
}
