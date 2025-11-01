#include <iostream>
#include <String>
using namespace std;
int pinsecurity(int pin)
{
   return pin;
}

 void userdetails( string name , long long int AccountNo )
 {
    cout<<" \t \t \t \t Your Acocount Details :"<<endl; 
    cout<<"NAME  -->"<<name<<endl;
    cout<<"AccountNo. -->"<<AccountNo<<endl;
 }
  
 int  checkbalance()
 {
    int balance=10000;
   return balance;
 }


void depositmoney(int amount )

 {
      int current=checkbalance();
      amount=amount+current;
      cout<<" Your current  amount  "<<amount<<endl;

 }

 
void withdrawmoney(int withdrawamount )

 {
      int current=checkbalance();
      withdrawamount=current-withdrawamount;
      cout<<" Your current  amount --> "<<withdrawamount<<endl;
 }


int main()

{


cout<<"\t \t \t \t \t \t \t\t WELCOME TO ATM  \t \t \t \t";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"   \t\t\t\t\t 1- CHECK BALANCE    2- CASH DEPOSIT   3- CASH WITHDRAW    4- PIN GENERATION   5-EXIT  \t\t\t\t"   <<endl;
cout<<endl;cout<<endl;
int pin,repin;
string name;
cout<<"enter your name -->";
getline(cin,name);
 long long int accountnum;
cout<<endl;
cout<<"Enter the account number -->";
cin>>accountnum;
cout<<endl;

cout<<" Enter the four digit  pin -> ";
cin>>pin;
cout<<endl;

userdetails(name,accountnum);
cout<<endl;
cout<<endl;
cout<<endl;


cout<<endl;


cout<<"Re enter the PIN to verify yourself --> ";
cin>>repin;

cout<<endl;

if(repin==pin)
{
bool running=true;
while(running)
{
    int choice;
cout<<"enter the choice -> ";
cin>>choice;
cout<<endl<<endl;
    if(choice==5)
    {
        
    cout<<"THANK YOU for using ATM. "<<endl<<endl;
     running=false;
     continue;
    }

switch (choice)
{
case 1:
   cout<<"Your current balance --> "<<checkbalance();
   cout<<endl;
    break;
case 2:
int amt;
    cout<<"enter amount to be deposited-->";
    cin>>amt;
   cout<<"Your amount after deposited -> "<<endl;
   depositmoney(amt);
   cout<<endl;
   
    break;
case 3:
int amtwithdraw;
  cout<<"Enter the amount to be withdrawn --> :";
   cin>>amtwithdraw;
   cout<<endl;
   cout<<"Your current balance -> ";
   withdrawmoney(amtwithdraw);
   cout<<endl;
   
    break;

case 4:
int regeneratepin;
cout<<"Please Enter the four digit pin -->";
cin>>regeneratepin;
cout<<endl;
cout<<endl;
pin=regeneratepin;
pinsecurity(pin);
cout<<"You have succesfully changed the PIN"<<endl<<endl;
continue;

   

default:
cout<<" you entered invalid choice !!";
cout<<endl;
    break;
}
}
}

else
{
     cout<<endl;
cout<<endl;
cout<<" you entered the wrong PIN ";
cout<<endl;cout<<endl;
}


cout<<" \t\t\t\t\t\t\t    EXIT   \t\t\t\t\t\t\t ";

    return 0;
}