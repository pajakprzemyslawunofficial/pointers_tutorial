include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

struct Node * head;

void Print(){
	struct Node * temp=head;
	printf("List is: ");
	while(temp!=NULL)
	{
		printf(" %d", temp->data);
		temp=temp->next; 
	}
	printf("\n");
}
void Insert(int x){
	struct Node * temp = (Node *)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head=temp;

}	
	

int main(){
	head = NULL;
	int n,i,x;
	printf("How many numbers?\n");
	scanf("%d", &n);
	
	for (int i=0; i<n; i++){
		printf("Enter %d number\n", i);
		scanf("%d", &x);
		Insert(x);
		Print();
	}
	
}