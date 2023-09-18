#include<bits/stdc++.h>
using namespace std;

int main(){
	auto comp = [](const pair<int,int> &a,const pair<int,int>&b){
		return a.first >b.first;
	};
	priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comp)>minHeap(comp);
	vector<pair<int,int>> p = {{1,1},{5,2},{2,3},{3,6}};
	for(const auto&ite:p){
		minHeap.push({ite.first,ite.second});
	}
	while(!minHeap.empty()){
		cout << " (" << minHeap.top().first << ", " << minHeap.top().second  << ")" << endl;
		minHeap.pop();
	}
	return 0;
}
