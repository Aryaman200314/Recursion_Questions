#include<iostream>
using namespace std;

class Animals{
    public:
    void Speak()
    {
        cout<<"Animals can speak"<<endl;
    }
};

class Humans{
    public:
    void Speak()
    {
        cout<<"Humans can talk"<<endl;
    }
};


class both: public Animals, public Humans{

};


int main()
{
    both b1;
    b1.Animals::Speak();
    b1.Humans::Speak();
}