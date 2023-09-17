#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>vec(10,0);
	for(int i = 0;i<5;i++){
		int x;cin >> x;
		vec.push_back(x);
	}
	for(const auto&ite:vec){
		cout << ite << " ";
	}
	return 0;
}
