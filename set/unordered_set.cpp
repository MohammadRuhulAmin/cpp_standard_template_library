#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<string>s;
	s.insert("abc"); // o(1)
	s.insert("bcd");
	//s.find() // o(1)
	for(const auto&ite:s)cout << ite << " ";
	return 0;
}
