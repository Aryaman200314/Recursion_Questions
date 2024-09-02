#include<iostream>
using namespace std;
int Product(int num1, int num2){
	num1 = num1*num1;
	num2 = num2*num2;
	int product = num1*num2;
	return product;
}

int main(){
	int number;
	cin>>number;
	int num1 = number%10;
	number=number/10;
	int num2 = number;
	int pro1 = Product(num1, num2);
	
	int number2;
	cin>>number2;
	int num3 = number2%10;
	number2=number2/10;
	int num4 = number2;
	int pro2 = Product(num3, num4);
	
	int subs = pro1-pro2;
	if(subs>0){
		cout<<"Non-N";
	}
	else if(subs<0)
	{
		cout<<"Negetive";;
	}
	else if(subs==0){
		cout<<"Zero";
	}
	else{
		cout<<"Nothing";
	}
}
