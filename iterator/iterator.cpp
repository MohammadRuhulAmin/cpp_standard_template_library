#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5};
	vector<int>::iterator ite = v.begin();
	for(;ite!=v.end();ite++)cout << *ite << " ";
	vector<pair<int,int>>vp = {{1,2},{2,3}};
	vector<pair<int,int>>::iterator it;
	for(it = vp.begin();it!=vp.end();it++){
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}
