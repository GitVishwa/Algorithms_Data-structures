/*

Implemenntation of basic operations of vector
	1)push_back()
	2)pop_back()
	3)erase()
	4)emplace_back()


@Author Vishwanath Gulabal


*/

#include<iostream>
#include<vector>

using namespace std;

int main(void){

	//vector for integer
	vector<int> v_num;

	//push_back()
	for(int i_index = 0;i_index <= 5;i_index++) {
			v_num.push_back(i_index);
	}

	cout<< "Displaying Contents of a vector"<< endl;	
	for(int i_index = 0;i_index <= 5;i_index++) {
		cout << v_num[i_index] << endl;
	}
	
	//pop_back()
	v_num.pop_back();
	
	//emplace_back(), insert the elements at the end of last inserted elements

	v_num.emplace_back(100);

	cout<< "Displaying Contents of a vector"<< endl;	
	for(int i_index = 0;i_index <= 5;i_index++) {
		cout << v_num[i_index] << endl;
	}

	return 0;
}
