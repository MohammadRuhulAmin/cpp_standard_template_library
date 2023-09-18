#include<bits/stdc++.h>
using namespace std;
/*
	https://www.youtube.com/watch?v=WhIcVlkZ19s
*/
int main(){
	auto comp = [](int a, int b){
		return a>b;
	};
	priority_queue<int,vector<int>,decltype(comp)>Q(comp);
	vector<int>v = {8,6,2,3,4,2,1};
	for(auto x:v)Q.push(x);
	while(!Q.empty()){
		cout << Q.top() << " ";
		Q.pop();
	}
	
	
	return 0;
}
