#include<bits/stdc++.h>
using namespace std;

class Student{
	public:
		string name;
		int roll;
		int marks;
		Student(string s,int m,int r){
			this->name = s;
			this->marks = m;
			this->roll = r;
		}
};

int main(){
	Student s1 ("Ruhul",80,1);
	Student s2 ("Saifullay",80,2);
	Student s3 ("Sazid",75,3);
	Student s4 ("Sakib",95,4);
	vector<Student>studentsList;
	studentsList.push_back(s1);
	studentsList.push_back(s2);
	studentsList.push_back(s3);
	studentsList.push_back(s4);
	cout << "\n Sort According to marks:\n";
	sort(studentsList.begin(),studentsList.end(),[](Student a,Student b){
		if(a.marks == b.marks)return a.name < b.name;
		return a.marks>b.marks;
	});
	for(const auto&ite:studentsList){
		cout << ite.name << " " << ite.marks << " " << ite.roll << endl;
	}
	cout << "\n Sort According to Name:\n";
	sort(studentsList.begin(),studentsList.end(),[](Student a, Student b){
		return(a.name>b.name);
	});
	for(const auto&ite:studentsList){
		cout << ite.name << " " << ite.marks << " " << ite.roll << endl;
	}
	
	return 0;
}
