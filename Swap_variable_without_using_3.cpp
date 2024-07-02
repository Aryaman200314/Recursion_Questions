#include<iostream>
using namespace std;
int main(){
    int firstVariable = 10;
    int secondVarable = 20;
    cout<<firstVariable<<" "<<secondVarable<<endl;
    firstVariable = firstVariable+secondVarable;
    secondVarable = firstVariable - secondVarable;
    firstVariable = firstVariable - secondVarable;
    secondVarable = firstVariable - secondVarable;
    cout<<firstVariable<<" "<<secondVarable;
}