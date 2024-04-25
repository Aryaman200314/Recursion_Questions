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

int main()
{
    Dog d1;
    cout<<d1.type<<endl;
    cout<<d1.name<<endl;
    cout<<d1.age<<endl;
    d1.Setvalues(1,'d',2);
    cout<<d1.type<<endl;
    cout<<d1.name<<endl;
    cout<<d1.age<<endl;
}