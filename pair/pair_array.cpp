#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,int>pair_array[3];
	pair_array[0] = make_pair(1,2);
	pair_array[1] = make_pair(2,3);
	pair_array[2] = make_pair(3,4);
	swap(pair_array[0],pair_array[2]);
	for(const auto&ite:pair_array){
		cout << ite.first << " " << ite.second << endl;
	}
	
	return 0;
}
