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
    void talk()
    {
        cout<<"Humans can talk"<<endl;
    }
};


class both: public Animals, public Humans{

};


int main()
{
    both b1;
    b1.Speak();
    b1.talk();

    return 0;
}