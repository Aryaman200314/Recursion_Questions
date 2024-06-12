#include<iostream>
#include<string>
using namespace std;
class smartPhone{
    public:
    int modelnumber;
    string name;
    smartPhone(int modelN, string naam, string pri){
        this->modelnumber = modelN;
        this->name = naam;
        this->this_is_private = pri;
}
	
	private:
		string this_is_private;
		
	public:
		void privateacc(){
			cout<<"private"<<this_is_private;
		}
        

    void details(){
        cout<<"func"<<endl;
        cout<<"This is model number:"<<modelnumber<<endl;
        cout<<"this is the name:"<<name<<endl;
    }
};
int main(){
     smartPhone* sm = new smartPhone(6969, "iphone", "THis is private");
     sm->details();
     sm->privateacc();
     
}

