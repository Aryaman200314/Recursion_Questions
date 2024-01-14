#include<iostream>
using namespace std;

bool checkPali(string name, int a, int b)
{
    if(a>b)
    {
        return true;
    }
    if(name[a]!=name[b])
    {
        return false;
    }
    return checkPali(name, a+1, b-1);
}

int main()
{
    string name;
    cin >> name;

    bool ans = checkPali(name, 0, name.length()-1);
    if(ans)
    {
        cout<<"this is palindrome"<<endl;
    }
    else
    {
        cout<<"This is not an palindrome";
    }
}