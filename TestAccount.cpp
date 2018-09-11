#include <iostream>
#include "Account.cpp"
using namespace std;

int main() {
    Customer john("John Doe", "john@doe.com" , 'm');
	cout << john.getName() << " (" << john.getGender() << ") at " << john.getEmail() << endl;

	Customer mary("Mary Jane");
	mary.setGender('f');
	mary.setEmail("mary@jane.com");
	mary.print();

	Account a1(john, 8111, 99.99);
    a1.setBranch("b1");
    cout << "Customer: " << a1.getCustomerName() <<" Branch: " << a1.getBranch() << " A/C no: " << a1.getAccountNumber() << " Balance: " << a1.getBalance() << endl;
    a1.credit(20);
    a1.debit(10);
    cout << "Customer: " << a1.getCustomerName() <<" Branch: " << a1.getBranch() << " A/C no: " << a1.getAccountNumber() << " Balance: " << a1.getBalance() << endl;

    Account a2(mary, 8222, "main");
    a2.print();
    a2.setBalance(100);
    a2.credit(20);
    a2.debit(200);
    a2.print();

    a1.getCustomer().print();
    a2.getCustomer().print();

    return 0;
}
