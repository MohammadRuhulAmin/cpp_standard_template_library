#include<bits/stdc++.h>
using namespace std;

class compare{
	public:
		bool operator()(const int &a,const int &b){
			return a>b;
		}
};

int main(){
	set<int,compare>st;
	st.insert(1);
	st.insert(2);
	st.insert(3);
	for(const auto&ite:st)cout << ite << " ";
	
	
	return 0;
}
