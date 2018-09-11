//%~!@#$%^&*()
//-*- coding: utf-8 -*-
//__author__ = 'tanvir'

#include <iostream>
#include "MySet.cpp"

using namespace std;

int main(void)
{
    MySet a;
    a.print();// Output Line 1, The set is empty.
    for(int i = 0; i < 5; i++){
        a.insert(i);
    }
    a.print();// Output Line 2, The set contains: 0 1 2 3 4
    
    MySet b = a;
    b = b + 1;
    b.print();// Output Line 3, The set contains: 0 1 2 3 4
    b = b + 11;
    b.print();// Output Line 4, The set contains: 0 1 2 3 4 11
    b.remove(-1);
    b.print();// Output Line 5, The set contains: 0 1 2 3 4 11
    b = b - 2;
    b.print();// Output Line 6, The set contains: 0 1 11 3 4
    
    MySet aUb = a + b;
    aUb.print();// Output Line 7, The set contains: 0 1 2 3 4 11
    
    MySet aMb = a - b;
    aMb.print();// Output Line 8, The set contains: 2
    return 0;
}
