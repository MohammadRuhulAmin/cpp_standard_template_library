#include<bits/stdc++.h>
using namespace std;
/*
https://www.youtube.com/watch?v=WhIcVlkZ19s
template<
	class T,
	class Container = std::vector<T>,
	class Compare = std::value_type
	>class priority_queue;
	
	functions : 
	1.size()
	2.top()
	3.empty()
	4.push()
	5.pop()
	
*/
int main(){
	
	priority_queue<int>QmHeap;
	vector<int>v = {8,6,2,3,4,2,1};
	for(auto x:v)QmHeap.push(x);
	while(!QmHeap.empty()){
		cout << QmHeap.top() << " ";
		QmHeap.pop();
	}
	
	
	return 0;
}
