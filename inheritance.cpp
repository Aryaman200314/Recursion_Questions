#include<iostream>
using namespace std;

class human
{
    public:
    int age;
    int weight;
    int height;
    void setage(int ag, int we, int he)
    {
        this->age=ag;
        this->weight=we;
       this->height=he;

    }

    private:
    int pricheck;

};

//inherited class from human

class male: public human{
    public:
    int male1;
    int malefunc(int value)
    {
        this->male1=value;
    }
};

int main()
{
    male m1;
    cout<< m1.height<< endl;
    cout<< m1.weight<< endl;
    cout<< m1.age<< endl;
     
    
    m1.setage(20, 96, 112);

   cout<< m1.height<< endl;
    cout<< m1.weight<< endl;
    cout<< m1.age<< endl;
     
     m1.malefunc(10);
     cout<< m1.male1<< endl;


    // cout<<m1.pricheck<<endl;   //NOT POSSIBLE 


    return 0;

}