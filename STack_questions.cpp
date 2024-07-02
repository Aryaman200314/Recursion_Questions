#include<iostream>
#include<stack>
using namespace std;
int main(){
	string str = "aryaman";
	stack<char> stackk;
	for(int i = 0 ; i < str.length();i++){
		stackk.push(str[i]);
	}
//	string reverse = "";
	while(!stackk.empty()){
//		reverse.push_back(stackk.top());
		cout<<stackk.top();
		stackk.pop();
	}
//	cout<<reverse<<endl;
}
