#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<in5t> st;
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"Sisze" <<st.size()<<endl;

    st.pop();
    if(st.empty()){
        cout<<"empty";
    }
    else{
        cout<<"not empty"<<endl;
    }
    
    cout<<st.top()<<endl;
    
    return 0;
}


