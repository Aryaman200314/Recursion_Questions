#include<iostream>

using namespace std;

class Stack{
	public:
		int top;
		int *arr;
		int size;
		
	Stack(int size){
		this->size = size;
		arr = new int[size];
		top = -1;
	}
	
	
	void push(int element){
		if(size-top>1){
			top++;
			arr[top] = element;
		}
		else{
			cout<<"Stack overflow!"<<endl;
		}
	}
	void pop(){
		if(top>-1){
			top--;
		}
		else{
			cout<<"Stack underflow!"<<endl;
		}
	}
	
	int peek(){
		if(top>-1){
		return arr[top];
	}
	else{
		cout<<"Stack is empty!"<<endl;
	return -1;
	}
	}
	
	
	
	
	bool isEmpty(){
		if(top==-1){
			return true;
		}
		else{
			return false;
		}
	}
};



int main(){
	Stack st(5);
	st.push(1);
	st.push(11);
	st.push(22);
	
	cout<<"peak1 "<<st.peek()<<endl;
	
	st.pop();
	cout<<"peak2 "<<st.peek()<<endl;
	st.pop();	
	return 0;
}
