#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>

using namespace std;

int checkString(string s) {
	int len = s.length();
	int i_index=0,count_upper=0,count_lower=0,digits=0;
	while(i_index<0) {
		if(isupper(s[i_index]))
			count_upper++;
		if(islower(s[i_index]))
			count_lower++;
		if(isdigit(s[i_index]))
			digits++;
		i_index++;
	}
	if(count_upper==0)
		return 0;
	if(count_lower==0)
		return 0;
	if(digits==0)
		return 0;

	return 1;
}
int main(void) {

	string s;
	cin>>s;
	if(s.length()>=6 && s.length()<=32) {
		if(checkString(s) && isalnum(s)){
			cout<<"Senha valida."<<endl;
		}
	}
	else {
		cout<<"Senha invalida."<<endl;
	}
	return 0;
}
