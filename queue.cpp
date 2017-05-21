
/*Implementation of Queue */

#include<iostream>
#define MAX_SIZE 9

using namespace std;

class Queue{
private:
	int storage[MAX_SIZE];
	int rear,front;
public:
	//constructor
	Queue();
	
	void Enqueue(int );
	void display();
	int Dequeue();
	bool IsEmpty();
	bool IsFull();
};

Queue::Queue(){

	front=rear=-1;
}

bool Queue::IsEmpty() {
	return (front == -1 && rear == -1);
}

bool Queue::IsFull() {
	return (rear+1)%MAX_SIZE == front ? true : false;
}

void Queue::Enqueue(int item){

	if(IsFull()){
		cout << "Queue is full " <<endl;	
		return;
	}
	if(IsEmpty()) {
		front = rear = 0;
	}
	else{
		rear = (rear+1) % MAX_SIZE;
	}
	storage[rear] = item;
}

int Queue::Dequeue(){
	if(IsEmpty()){
		cout << "Queue is empty" << endl;
		return -1;
	}
	if(front == rear){
		rear = front = -1; 
	}
	else{
		front = (front+1)%MAX_SIZE;
	}
	return storage[front];
}
	
void Queue::display(){
	
	int cnt = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
		
	for(int i_index = 0;i_index < cnt;i_index++) {
		int index = (front+i_index) % MAX_SIZE;
		cout << storage[index] << endl;
	}
}
int main(void){
Queue q;
q.Enqueue(12);
q.Enqueue(24);
q.Enqueue(32);
q.Enqueue(15);
q.display();
return 0;
}
