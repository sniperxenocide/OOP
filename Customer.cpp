#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
   string name;
   string email;
   char gender;
public:
    Customer();
    Customer(string x,string y,char z);
    Customer(string x);
    string getName() {return name;};
    char getGender() {return gender;};
    string getEmail() {return email;};
    void setGender(char z);
	void setEmail(string y);
	void print();

};


Customer::Customer()
{
    name="";
    email="";
    gender=' ';
}
Customer::Customer(string x,string y,char z)
{
    name=x;
    email=y;
    gender=z;
}

Customer::Customer(string x)
{
    name=x;
}

void Customer::setGender(char z)
{
    gender=z;
}

void Customer::setEmail(string y)
{
    email=y;
}

void Customer::print()
{
    cout<<name<<" "<<"("<<gender<<")"<<" at "<<email<<"\n";
}


