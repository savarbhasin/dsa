#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* link;

	Node(int data){
		this->data = data;
		this->link = NULL;
	}
};

class Stack{
	Node* top=NULL;

	public:
	Stack(){
		top=NULL;
	}
	void push(int data){
		Node* newNode = new Node(data);
		if(!newNode){
			cout<<"Stack overflow";
			exit(1);
		}
		newNode->link = top;
		top = newNode;
	}
	bool isEmpty(){
		return top == NULL;
		
	}

	int peek(){
		if(isEmpty()){
			exit(1);
		}
		return top->data;
	
	}
	void pop(){
		if(!isEmpty()){
			Node* temp = NULL;
			temp = top;
			top = top->link;
			free(temp);
		}
		else
		{
			cout<<"stack underflow"<<endl;
			exit(1);
		}
		
	}
	void display(){
		if(!isEmpty()){
			Node* temp = top;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp = temp->link;
			}
			cout<<endl;
		} else{
			cout<<"stack is empty"<<endl;
			exit(1);
		}
	}


};

int main(){	
	Stack s;
	for(int i=0;i<10;i++){
		s.push(i);
	}
	s.display();
	cout<<endl;
	s.pop();
	cout<<endl<<"displaying peek";
	cout<<s.peek()<<endl;
	cout<<endl;
	s.display();
	return 0;
}
