#include<iostream>
using namespace std;
class Hero{


    public:
    int hp=10;
    string str="Aryaman";
    string custom;
    void pub()
    {
        cout<<"THis is public"<<endl;
    }
    
    Hero ()   // Defalut constructor 
    //when we make this constructor that constructor was automaticly bilu by the system will get deleted 
    // now this is the main 
    {
        cout<<"Default connstructor called"<<endl;
    }
    
    Hero (int health)
    {
        
        this-> hp = health; 
    }
    private:
    int pass = 99;
    void print()
    {
        cout<<pass;
    }


};
int main()
{
    Hero obj;
    Hero obj1(2);
    
   
   



    // cout << (obj.hp)<<endl;
    // cout<< obj.str<<endl;
    // obj.custom = "THis is giving value to a public data member outside the class";
    // cout<<obj.custom<<endl;
    // obj.pub();
    // //cannot access private data members outside the class
    // // cout<<obj.pass; 
    return 0;
}