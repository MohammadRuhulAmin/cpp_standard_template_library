#include<bits/stdc++.h>
using namespace std;

int main(){
	set<string>s;
	s.insert("abc"); // log(n)
	s.insert("bcd");
	//s.find() // log(n)
	for(const auto&ite:s)cout << ite << " ";
	return 0;
}
