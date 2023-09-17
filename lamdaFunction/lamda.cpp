#include<bits/stdc++.h>
using namespace std;

int main(){
	auto sum =  [](int x,int y){return x+y;}(2,3);
	cout << sum << endl;
	auto count = [](int x, int y){return x+y+4;};
	cout << count(12,22);
	
	return 0;
}
