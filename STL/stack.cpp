/* Implemenations of basic Stack operations */


#include<iostream>
#include<stack>

using namespace std;

int main() {

    stack<int> S;

    /*Insert elements into the stack */
    for(int i=100; i<1000; i+=100) {
        S.push(i);
    }

    /* Size of stack */
    cout<<"Size of the Stack is "<< S.size() <<endl;
	
	cout << endl;
    /*Display the elements of stack */
    cout << "the elements are "<<endl;

    while(!S.empty()) {
        cout << ' ' <<S.top() <<endl;
        S.pop();
    }
}
