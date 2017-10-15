#include<iostream>
#include<stdlib.h>

using namespace std;

class Array{

	public:

		int length;
		Array(){
		
		}
		void insert(int [], int, int);
		void Delete(int [], int, int);
		void rotate(int [], int, int);
		void search(int [], int, int);
		void display(int [], int);
};

void Array::insert(int array[],int element,int length){

	array[length++] = element;

}

void Array::Delete(int array[],int element,int length){
	
	int flag = 0, temp;
	for(int i=0;i<length;i++){
		if(array[i] == element){
			temp = array[i];
	       		array[i] = array[i+1];
			flag++;
		}
	}

	if(flag!=0){
			printf("Element deleted successfully\n");
			length--;
	}
	else
		printf("Element is not in the array\n");

}

void Array::display(int array[], int length){
	for(int i=0;i<length;i++){
		cout << array[i] << endl;
	}
}

void Array::search(int array[], int element, int length){
	int flag=0;
	for(int i = 0;i<length;i++){
		if(array[i] == element){
				printf("element is found at %d position\n",i+1);
				flag++;
				break;
		}
	}
	if(flag == 0)
		printf("Element is not found in the array\n");
}

void swap(int array[],int number,int length){
	for(int i=0;i<length;i++){
		int temp = array[i];
		array[i] = array[i+1];
		array[i+1] = temp;
	}	
}

void Array::rotate(int array[],int number,int length){
	swap(array,0,number);
	swap(array,number+1,length);
	swap(array,0,length);
}


int main(){
		int *array = new int[10];
		static int element, number, length;
	       	int choice;

		cout << "Enter the number of elements for an array you want to create "<<endl;
		cin >> length;
		
		cout << "Enter the elements " <<endl;
		
		for(int i=0;i<length;i++){
			cin >> array[i];
		}

		cout << endl << endl;
	
		Array A;
			while(1){
		cout << " -------------Array Basic Operations----------- "<<endl;
		cout << "Enter the operation you  want to perform in array" << endl;
		cout << "1.Insert " <<endl;
		cout << "2.Delete " <<endl;
		cout << "3.Rotate " <<endl;
		cout << "4.Search an element " <<endl;
		cout << "5.Display the elements " << endl;
		cout << "6.Quit " <<endl;
		cout << "-----------------------------------------------"<<endl;

		cin >> choice;
		
		switch(choice){
		
			case 1:{
				cout << "Enter the Element you want to insert" << endl;
				cin >> element;
				A.insert(array,element,length);		
			}
			break;

			case 2:{
				cout << "Enter the Element you want to delete " << endl;
				cin >> element;
				A.Delete(array,element,length);
			}
			break;

			case 3:{
				cout << "Enter the number of which you want to rotate the array " <<endl;
				cin >> number;
				A.rotate(array,number,length);
			}
			break;

			case 4:{
				cout << "Enter the element you want to search "<< endl;
				cin >> element;
				A.search(array,element,length);
			}
			break;

			case 5:{
				cout << "The elements are "<<endl;
				A.display(array,length);
			}
			break;


			case 6:{
				exit(0);
			}
			break;
			default:{
				cout << "Wrong choice " << endl;
			}
			break;
		}
	}
	delete[] array;
		
}
