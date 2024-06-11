#include <stdio.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void insertNode(Node* head, int x){
	Node* newNode = new Node(x);
	newNode->next = head;
	head = newNode;
}


int main(){
	int arr[10] = {0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.12,0.23,0.68};
	int bucketArr[10] = {0};

	return 0;
}
