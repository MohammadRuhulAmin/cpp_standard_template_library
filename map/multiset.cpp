#include<bits/stdc++.h>
using namespace std;

int main(){
	multiset<string>s;
	s.insert("abc"); 
	s.insert("bcd");
	s.insert("abc");
	for(const auto&ite:s)cout << ite << " "; // sorted!
	return 0;
}
