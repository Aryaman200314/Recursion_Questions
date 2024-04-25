#include<iostream>
using namespace std;

//Function overloading 
// same name but diff parameters

// 1. number of parameters
// 2. type of parameters
// 3. order of parameters


class A{
    public:
    void Hello()
    {
        cout<<"Hello"<<endl;
    }

    int Hello(string name)
    {
        cout<<"Hello " << name <<endl;
    }

    void Hello(string name, int number)
    {
        cout<<"Hello " << name << number << " times" <<endl;
    }
};



//operator overloading 

class B{
    public:
    int val = 100;
    int val1 = 10;
    void operator+ ()
    {
        cout<<"Hello"<<endl;
    }
    void operator() ()
    {
        cout<<"bracket" << this->val<<endl;
    }
    void operator- ()
    {
        cout<<this->val + this->val1;
    }
};

int main()
{
    B obj;
    +obj;
    obj ();
    -obj;





//     A obj;
//     obj.Hello();
//     obj.Hello("Aryaman");
//      obj.Hello("Aryaman" ,69);
 }