/*

Longest Common Substring

*/
#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;


int main(void) {

	string s1,s2;
	stack<char> s;
	int i_index=0,j_index=0;
	getline(cin,s1);
	getline(cin,s2);
	
	
	while(i_index < s1.length() && j_index < s2.length() ) {
		s.push(s1[i_index]);
		s.push(s2[j_index]);
		i_index++;
		j_index++;
	}

	while(i_index < s1.length()) s.push(s1[i_index]),i_index++;

	while(j_index < s2.length()) s.push(s2[j_index]),j_index++;	

	while(!s.empty()) {
		cout << s.top() ;
		s.pop();
	}

	return 0;
}
