#include<iostream>
using namespace std;

class Animals{
    public:
    void Speak()
    {
        cout<<"Animals"<<endl;
    }
};

class Humans: public Animals{
    public:
    void talk()
    {
        cout<<"Humans"<<endl;
    }
};


class Aliens: public Animals{
    public:
    void IDK()
    {
        cout<<"Aliens"<<endl;
    }
};


int main()
{
    Animals A1;
    Humans H1;

    Aliens A2;

    A1.Speak();

    return 0;
}