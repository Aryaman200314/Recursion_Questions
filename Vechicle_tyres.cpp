#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int last = num%10;
	if(last%2==0){
		char alpha = 'E';
		num = num/10;
		cout<<num<<alpha;
		
	}
	else{
		cout<<num;
	}
}
