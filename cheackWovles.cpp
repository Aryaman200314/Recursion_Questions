#include<iostream>
using namespace std;

bool Checkv(char val){
    if(val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u' 
    || val == 'A' || val == 'E' || val == 'I' || val == 'O' || val == 'U'){
        return true;
    }
    else
    return false;
};

string RevString(string s){
    int size = s.length();
    int start=0;
    int end=size-1;
    while(end>start)
    {
        if(Checkv(s[start]) && Checkv(s[end])){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if(Checkv(s[start])){
            end--;
        }
        else if(Checkv(s[end])){
            start++;
        }
        else{
            start++;
            end--;
        }
    }
    return s;

};



int main(){
    cout<<"asf";
    cout<<RevString("hello");
    cout<<"asf";
}