#include <iostream>
// #include"Hero.cpp"
using namespace std;
class Hero
{
    // Public data members
public:
    int value = 10;
    string name = "aryaman";

    // Declaring an function that can asses the private data membders
    //GETTER
    void getter()
    {
        cout << "assessing inside the class" << endl;
        cout << important << endl;
    }

    //SETTER
    void setter(int value)
    {
        important=value;
        cout << "setting the value of private data member" << endl;
        cout << important << endl;
    }

    // Private data members
private:
    int important = 90;
};
int main()
{
    Hero hero1;
    cout<<"static allocation"<<endl;
    cout << hero1.name << endl;
    cout << hero1.value << endl;
    //     cout<<sizeof(h1)<<endl;
    //     cout<<h1.health<<endl;
    //     cout<<h1.damage<<endl;
    //     cout<<h1.armor<<endl;
    hero1.getter();
    hero1.setter(10);
    hero1.getter();

    cout<<"//////////////////////////"<<endl;
    Hero *b = new Hero;
    cout<<"Dynamic allocation"<<endl;
    cout<<"value: "<<(*b).value<<endl;
    cout<<"name: "<<(*b).name<<endl;

    cout<<"AKA"<<endl;

    cout<<"value: "<<b->name<<endl;
    cout<<"name: "<<b->value<<endl;


}
