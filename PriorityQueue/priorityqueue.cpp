#include<bits/stdc++.h>
using namespace std;

int main(){
	 priority_queue<int>pq; // max heap
	 pq.push(1);
	 pq.push(4);
	 pq.push(3);
	 pq.push(2);
	 cout << pq.size() << endl;
	 while(!pq.empty()){
	 	int val = pq.top();
	 	cout << val << " ";
	 	pq.pop();
	 }
	 cout << endl;
	 // min heap
	 priority_queue<int,vector<int>,greater<int>>minpq;
	 minpq.push(4);
	 minpq.push(3);
	 minpq.push(2);
	 minpq.push(1);
	 while(!minpq.empty()){
	 	int val = minpq.top();
	 	cout << val << " ";
	 	minpq.pop();
	 }
	return 0;
}
