#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,string>mp;
	mp.insert({4,"abc"}); // O(log(n))
	mp.insert({5,"cdf"}); 
	for(const auto&ite:mp){
		cout << ite.first << " " << ite.second << endl;
	}
	auto it = mp.find(4); // O(log(n))
	if(it == mp.end())cout << "No Value";
	else cout << (*it).first << " " << (*it).second << endl;
	mp.erase(3);
	return 0;
}
