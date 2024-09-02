#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0 ;i < n ; i++){
		cin>>arr[i];
	}
	vector<int> sample(n,0);
	int index = 0;
	int cnt=0;
	for(int i = 0 ; i < n ; i++){
		if(arr[i]!=0){
			sample[index] = arr[i];
			index++;
		}
		else{
			cnt++;
		}
	}
	for(int i = 0 ; i < n ; i++){
		cout<<sample[i]<<" ";
		
	}
}
