#include <iostream>
using namespace std;

// Using method overloading
// Rules
// name of the fucntion in parent and child must be same
//  parementers must be same
// only be done in inheritance

class A
{
public:
    void speaking()
    {
        cout << "Speaking" << endl;
    }
};
class B : public A
{
// public:
//     void speaking()
//     {
//         cout << "i donot speak" << endl;
//     }
};

class C
{
    public:
    int add(int a, int b)
    {
        cout<<a+b<<endl;
    }
};
class D: public C{
    // public:
    // int add(int a, int b)
    // {
    //     cout<<a-b<<endl;
    // }
};

int main()
{
    B obj;
    D obj1;
    obj.speaking();

    obj1.add(10,20);
    return 0;
}