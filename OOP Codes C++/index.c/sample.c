#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node{
	int data;
	struct node*next;
}*head;
void createlist(int n);// function prototype
void traverselist();//function prototype
int main(){
	//functions to create and display list
	int n;
	printf("How many no of nodes you enter:\n");
	scanf("%d",&n);
	createlist(n); //call function

	
	printf("\n Data in the list\n");
	traverselist(); //call function
	return 0;
	
}
//function defination of createlist
void createlist(int n)
{
	struct node*newnode,*temp; //declear two pointers type of node 
	int i,data;
	//Head node coding 
	head=(struct node*)malloc(sizeof(struct node)); //Memory allocation method
	if(head==NULL)
		printf("list is empty");
	else
	{
		printf("enter data for node 1:");
		scanf("%d",&data);
		head->data=data;
		head->next=NULL;
	}
	//create list nodes and add to the list
	temp=head;
	for(i=2;i<=n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("list is empty");
			break;
		}
		else
		{
			printf("enter  the data of node",i);
			scanf("%d",&data);
			newnode->data=data;
			newnode->next=NULL;
			//Combine two nodes
		temp->next=newnode;
		temp=temp->next;	
		}
}
	}
	//traversing list
	void traverselist()
	{
		struct node *temp=NULL;
		if(head==NULL){
			printf("list is empty");
			
		}
		else{
			temp=head;
			while(temp!=NULL){
			
			
				printf("\n Data is %d",temp->data);
				temp=temp->next;}
			
		}
		
		
}
	

