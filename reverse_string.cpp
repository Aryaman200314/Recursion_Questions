#include<iostream>
using namespace std;

void reverseString(string& name,int i,int j)
{
    if(i>j)
    {
        return;
    }
    swap(name[i], name[j]);
    i++;
    j--;

    reverseString(name, i, j);
    cout<<name<<endl;
}

int main()
{
    string name;
    cin >> name;

    reverseString(name, 0, name.length()-1);
    
}