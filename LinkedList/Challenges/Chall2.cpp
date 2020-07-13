#include <stdio.h>
#include <stack>

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;

bool Palindrome()
{
	Node* temp=head;
	std::stack<int> s;
	while(temp !=NULL)
	{
		s.push(temp->data);
		temp = temp->next;
	}
	while(head!=NULL){
		int i=s.top();
		s.pop();
		if(head->data !=i) return false;
		head = head ->next;
	}
	return true;
}

void Add_Nodes(int x){
	Node *temp= new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void Print_Nodes()
{
	while(head != NULL)
	{
		printf(" %d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}


int main()
{
	Add_Nodes(1);
	Add_Nodes(2);
	Add_Nodes(2);
	Add_Nodes(1);
	Print_Nodes();	
	if(Palindrome())
	{
		printf("Linked List Palindroma !\n");
	
		}
	else{
		printf("Linked List no palindroma !\n");
	}

}


