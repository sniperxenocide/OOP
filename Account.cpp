#include<iostream>
#include "Customer.cpp"
using namespace std;

class Account {
private:
   Customer customer;
   int accountNumber;
   double balance;
   string branch;
public:
    Account();
    Account(Customer name,int ac,double bal);
    Account(Customer name,int ac,string brn);
    string getBranch()  {return branch;}
    int getAccountNumber()  {return accountNumber;};
    string getCustomerName() {return getCustomer().getName();};
    double getBalance() {return balance;};
    void setBranch(string br){branch=br;};
    void setBalance(int bl){balance=bl;};
    void credit(double i){balance=balance+i;};
    void debit(double i);
    Customer getCustomer() {return customer;};
    void print();

};

void Account::debit(double i)
{
    if(i<=balance)
    {
        balance=balance-i;
    }
    else cout<<"Amount withdrawn exceeds the current balance!\n";
}
Account::Account()
{
    branch=' ';
    accountNumber=0;
    balance=0;

}
Account::Account(Customer name,int ac,double bal)
{
    customer=name;
    accountNumber=ac;
    balance=bal;
    branch=' ';
}

Account::Account(Customer name,int ac,string brn)
{
    customer=name;
    accountNumber=ac;
    branch=brn;
    balance=0;
}

void Account::print()
{
    cout << "Customer: " << customer.getName() <<" Branch: " << branch << " A/C no: " << accountNumber << " Balance: " << balance<<"\n";

}
