#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>nums = {1,4,5,32,13,4,55,3,2,11};
	sort(nums.begin(),nums.end(),[](int a,int b){
		return (a>b)?true:false;
	});
	for(const auto&ite:nums){
		cout << ite << " ";
	}
	
	
	return 0;
}
