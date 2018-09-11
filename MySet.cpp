//%~!@#$%^&*()
//-*- coding: utf-8 -*-
//__author__ = 'tanvir'

#include <iostream>
#include "MySet.h"

#define W_VAL -9999999

using namespace std;

//add MySet functions Implementations here

MySet::MySet()
{
    size=1000;
    array=new int[size];
    numOfElements=0;
}

MySet::MySet(int a)
{
    size=a;
    array=new int[size];
    numOfElements=0;
}

MySet::MySet(const MySet& temp)
{
    size=temp.size;
    numOfElements=temp.numOfElements;
    array=new int[size];
}

bool MySet:: isEmpty()
{
    if(numOfElements==0) return true;
    return false;
}

int MySet:: search(int n)
{
    int i;
    for(i=0;i<numOfElements;i++) if(array[i]==n) return i;
    return W_VAL;
}

void MySet::insert(int n)
{
    if(search(n)==W_VAL)
    {
    array[numOfElements]=n;
    numOfElements++;
    }
}

void MySet::remove(int n)
{
    int pos=search(n);
    if(pos!=W_VAL)
    {
        array[pos]=array[numOfElements-1];
        numOfElements--;
    }
}

/*void MySet::print()
{
    int i;
    for(i=0;i<numOfElements;i++) printf("%d ",array[i]);
}*/

MySet MySet::operator + (int n)
{
     MySet temp;
     return temp;
}

MySet MySet::operator - (int n)
{
     MySet temp=remove(n);
     return temp;
}

MySet MySet::operator + (const MySet& ob)
{
    MySet temp;
    int i;
    for(i=0;i<numOfElements;i++) temp.insert(array[i]);
    for(i=0;i<ob.numOfElements;i++) temp.insert(array[i]);
    return temp;
}

MySet MySet::operator - (const MySet& ob)
{
    MySet temp;
    int i;
    for(i=0;i<numOfElements;i++) temp.insert(array[i]);
    for(i=0;i<ob.numOfElements;i++) temp.remove(ob.array[i]);
    return temp;
}
