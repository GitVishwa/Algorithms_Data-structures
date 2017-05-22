#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void) {

	string s;
	int i_index=0,k_index=0,j_index=0,mid=0,len=0,l_index=0;
	cout << "Entre the string "<<endl;
	getline(cin , s);	
	cout << "Entred string is :" << s << endl;
	mid = s.length()-1;
	len = mid;
	k_index = mid/2+1;
	l_index = mid/2;
	while(i_index <= l_index) {
		char temp = s[i_index];
		s[i_index] = s[l_index];
		s[l_index] = temp;
		i_index++;
		l_index--;
	}
	
	while(k_index < len) {
		char temp =s[k_index];
		s[k_index] = s[len];
		s[len] = temp;
		k_index++;
		len--;
	}
//	reverse(s.begin(),s.end());
	cout << "The redefined string is "<< s << endl;
	//puts(s);
	
	return 0;
}
