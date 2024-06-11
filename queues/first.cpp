#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node* next;

	Node(int data){
		this->data=data;
		this->next = NULL;
	}
	
};

class Queue{
	Node* front;
	Node* rear;

	
	public:
	Queue(){rear=front=NULL;};
	void add(int x){
		Node* temp = new Node(x);
		if(rear == NULL){
			front = temp;
			rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}

	void pop(){
		Node* temp = NULL;
		if(rear==NULL){
			return;
		}
		temp = front;
		front = front->next;
		if(front == NULL){
			rear=NULL;
		}
		delete (temp);
	
	}	
	bool isEmpty(){
		return front==NULL;
	
	}
	int first(){
		if(isEmpty()){
			return -1;
		}
		return front->data;
	}


};




int main(){
	Queue q;
	q.add(10);
	cout<<q.first()<<endl;

	return 0;
	
}
