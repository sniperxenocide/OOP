#ifndef MySet_Class
#define MySet_Class
class MySet
{
private:
    int size;
    int *array;
    int numOfElements;
public:
    MySet();
    MySet(int a);
    MySet(const MySet& temp);
    bool isEmpty();
    int search(int n);
    void insert(int n);
    void remove(int n);
    void print();
    //add your operator overloading functions' declaration here
    MySet operator + (int n);
    MySet operator - (int n);
    MySet operator + (const MySet& ob);
    MySet operator - (const MySet& ob);
    MySet operator = (const MySet& ob);
};
#endif
