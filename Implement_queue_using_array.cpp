#include <iostream>
#include <queue>
using namespace std;
class Queue {
	int *arr;
	int size;
	int front;
	int rear;
public:
	Queue(){
		size=1001;
		arr = new int[size];
		queue = 0;
		front = 0;
	}
	bool inEmpty(){
		if(front==rear){
			return true;
		}
	}
};


int main(){
	
}
