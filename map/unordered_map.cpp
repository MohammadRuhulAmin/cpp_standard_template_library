#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int,string>mp;
	mp.insert({4,"abc"}); // O(1)
	mp.insert({5,"cdf"}); 
	for(const auto&ite:mp){
		cout << ite.first << " " << ite.second << endl;
	}
	auto it = mp.find(4); // O(1)
	if(it == mp.end())cout << "No Value";
	else cout << (*it).first << " " << (*it).second << endl;
	auto itx = mp.find(5);
	if(itx!=mp.end())mp.erase(itx);
	mp.clear(); // for clearing map
	return 0;
}
