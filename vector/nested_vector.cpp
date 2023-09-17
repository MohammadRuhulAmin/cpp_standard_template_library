#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,int>>vec = {{1,2},{3,4},{5,6}};
	for(const auto&ite:vec){
		cout << ite.first << " " << ite.second << endl;
	}
	// array vector
	int N;cin >> N;
	vector<int>v[N];
	for(int i = 0;i<N;i++){
		int n;cin >> n;
		for(int j = 0;j<n;j++){
			int x;cin >> x;
			v[i].push_back(x);
		}
	}
	for(const auto&ite:v){
		for(const auto&jte:ite){
			cout << jte << " " ;
		}
		cout << endl;
	}
	
	return 0;
}
