#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int size = str.length();
	int i = 0;
	int j = 5;
	while(i<j){
		if(str[i]==str[j] && str[i+1]==str[j-1]){
			cout<<str[2]<<str[3];
			return 0;
			
		}
		else{
			cout<<str[i]<<str[i+1]<<str[j-1]<<str[j];
			return 0;
		}
	}
}
