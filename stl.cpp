#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
    v.push_back(4);
    v.push_back(5); 
    v.push_back(6);
//    cout<<v[0]<<endl;
//    cout<<v.size()<<endl;
    v.clear();
//    cout<<v.size()<<endl;
    vector<int> seven(50,7);
    for(int i = 0 ; i < seven.size() ; i++){
//    	cout<<seven[i];
	}
	
	
	
	cout<<"STL_Sort"<<endl;
	
	int arr[4]={5, 4, 1, 2};
	sort(arr, arr+4);
	for(int i = 0 ; i < 4 ; i++){
		cout<<arr[i]<< " ";
		cout<<endl;
	}
//	cout<<endl;	
	string s="aryaman";
	sort(s.begin(), s.end());
	cout<<s<<endl;


	cout<<"STL_Pairs"<<endl;
	pair<int, string> p;
	p = {4, "aryaman"};
	
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	 
	 
	 cout<<"STL_Sets"<<endl;
	 
	 set<int> sets;
	 sets.insert(11);
	 sets.insert(11);
	 sets.insert(10);
	 sets.insert(12);
	 cout<<sets.count(10)<<endl;
	cout<<sets.count(11)<<endl;	 
	cout<<sets.size()<<endl;
	
	sets.erase(11);
		cout<<sets.count(11)<<endl;	 
	cout<<sets.size()<<endl;
	
	
	cout<<"STL_Maps"<<endl;
	
	map<int, int> m;
	cout<<m.size()<<endl;
	
	cout<<m[15]<<endl;
	cout<<m.size();
	map[10] = 5;
	
	
}
