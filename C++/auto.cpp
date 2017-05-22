#include<iostream>
#include<list>
using namespace std;

int main(void) {

 list<char> coll;

 for(char ch='a';ch<='z';++ch) {
	coll.push_back(ch);
 }

 for(auto elem : coll) {
	cout << elem <<endl;
 }

 cout<<endl;
}
