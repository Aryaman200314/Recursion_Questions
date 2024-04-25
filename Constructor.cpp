#include <iostream>
// #include"Hero.cpp"
using namespace std;
class Hero
{

    // CREATING an constructor
    //default constructor 
    public:
    Hero()
    {
        cout << "constructor called" << endl;
    }
    ~Hero()
    {
        cout << "destructor called" << endl;
    }


    //PAMETERISED constructor 

    // Hero(int health)
    // {
    //     value=health;
    //     cout<<value<<endl;
    // }

public:
    int value = 10;
    string name = "aryaman";

    void getter()
    {
        cout << "assessing inside the class" << endl;
        cout << important << endl;
    }

    void setter(int value)
    {
        important = value;
        cout << "setting the value of private data member" << endl;
        cout << important << endl;
    }

private:
    int important = 90;
};

int main()
 {
    //destructor called auto,atically for static object
     Hero ramesh;
    //  Hero ramesh(99);
    Hero *h = new Hero;
    //manually called for dynamatically created object
    delete h;

    return 0;
}