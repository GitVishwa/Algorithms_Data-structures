
/*Implementation of stack */

#include<iostream>
#include<stdlib.h>
#include<string>
#define MAX 100

using namespace std;

class Stack{

private:
	int storage[MAX];
	int top;

public:
	//Constructor
	Stack();


	void push(int );
	int pop();
	void display();
	void peek();
	bool isEmpty();

};


Stack::Stack() {

	top = -1;
}

void Stack::peek() {
	if(top == -1)
		throw string("Stack is empty");
	cout<<"The peek element is "<<storage[top] << endl;
}

bool Stack::isEmpty() {

	return (top == -1);
}

void Stack::push(int item){
	if(top == (MAX - 1)) {
		cout << "Stack is full Cannot push " << item << endl;
		return;
	}
	else{
		top++;
		storage[top] = item;
	}
}


int Stack::pop() {
	if(top == -1) {
		cout << "Stack is empty" << endl;
		return -1;
	}
	int item = storage[top];
	top--;
	return item; 
}

void Stack::display() {
	int i_index = 0;
	if(top == -1){
			cout << "No elements to be displayed " << endl;		
	}
	for(i_index = 0;i_index <= top; i_index++){
		cout << storage[i_index] << " ";
	}
	cout << endl;
}	

int main(void) {

Stack s1;
s1.push(12);
s1.push(14);
s1.push(14);
s1.peek();
s1.display();
s1.pop();
s1.display();
s1.pop();
s1.display();
s1.pop();

return 0;
}
