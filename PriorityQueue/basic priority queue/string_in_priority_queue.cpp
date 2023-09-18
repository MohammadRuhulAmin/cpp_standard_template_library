#include<bits/stdc++.h>
using namespace std;

int main(){
	auto comp = [](const pair<string,int> &a,const pair<string,int>&b){
		return a.second <b.second && a.first < b.first;
	};
	priority_queue<pair<string,int>,vector<pair<string,int>>,decltype(comp)>minHeap(comp);
	vector<pair<string,int>> p = {{"i",2},{"leatcode",1},{"coding",1},{"leatcode",1},{"love",2}};
	for(const auto&ite:p){
		minHeap.push({ite.first,ite.second});
	}
	while(!minHeap.empty()){
		cout << " (" << minHeap.top().first << ", " << minHeap.top().second  << ")" << endl;
		minHeap.pop();
	}
	return 0;
}
