#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		int exponent;
	
		Node* next;
	Node(int data, int exponent){
		this->data = data;
		this->exponent = exponent;
		this->next =NULL;
	}
	
};
	
void insertNode(Node* &node, int x, int exponent){
	if(node==NULL){
		Node*temp = new Node(x,exponent);
		node = temp;
		return;
	}
	Node* temp = new Node(x,exponent);
	node->next = temp;
	node = temp;

}

void display(Node* node){
	Node *temp = node;
	while(temp!=NULL){
		cout<<temp->data<<"x"<<"^"<<temp->exponent<<"+";
		temp = temp->next;
	
	}
	cout<<endl;

}
void add(Node* first, Node* second){
	Node* temp1 = first;
	Node* temp2 = second;
	Node* finalPoly = NULL;
	while(first!=NULL && second!=NULL){
		if(temp1->exponent == temp2->exponent){
			insertNode(finalPoly,temp1->data+temp2->data,temp1->exponent);
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else if(temp1->exponent > temp2->exponent){
			insertNode(finalPoly,temp1->data,temp1->exponent);
			temp1 = temp1->next;
		
		}
		else{
			insertNode(finalPoly,temp2->data,temp2->exponent);
			temp2 = temp2->next;
		}
	}
	while(temp1!=NULL){
		insertNode(finalPoly,temp1->data,temp1->exponent);
		temp1 = temp1->next;
	}
	while(temp2!=NULL){
		insertNode(finalPoly,temp2->data,temp2->exponent);
		temp2 = temp2->next;
		
	}
	display(finalPoly);

}



int main(){
	Node* first = new Node(6,5);
	insertNode(first,5,4);
	insertNode(first,2,1);

	Node* second = new Node(10,5);
	insertNode(second,6,3);
	insertNode(second,2,1);

	add(first,second);
	

}
