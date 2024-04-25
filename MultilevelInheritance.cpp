#include<iostream>
using namespace std;

class Animals{
    public:
    int type;
    char name;
    int age;
    void Setvalues(int t, char n, int a)
    {
        this->type=t;
        this->name=n;
        this->age=a;
    }
};


class Dog: public Animals{
    int typeD;

};


class smallDog: public Dog{

};


int main()
{
    Dog s1;
    cout<<s1.type<<endl;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    s1.Setvalues(1,'d',2);
    cout<<s1.type<<endl;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
}