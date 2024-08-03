#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
     cout<<"front of queue is "<<q.front()<<endl;
    cout << q.size()<<endl;
    q.pop();
    cout << q.size()<<endl;
    cout<<"front of queue is "<<q.front()<<endl;
    if(q.empty()){
    	cout<<"this is empty"<<endl;
	}
	else{
		cout<<"Not empty"<<endl;
	}
  
}
