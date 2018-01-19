// in this code array of link list is being created ..
#include<stdio.h>
#include<stdlib.h>

struct node{

	int  vertex;
	struct node * next;
};


int main(){
	int nodes;
	void create_graph(struct node* array_LinkedList[], int nodes );
	void print_graph(struct node* array_LinedList[],int nodes);
	printf("Enter the number of nodes in the graph :");
	scanf("%d",&nodes);
	struct node* array_linkedList[nodes];
	for(int i=0;i<=nodes;i++){
		array_linkedList[i]=NULL;
	}	
	create_graph(array_linkedList,nodes);
	print_graph(array_linkedList,nodes);	
}




void create_graph(struct node* array_LinkedList[],int nodes ){
	int i,connections,j;
	struct node* new_node;
	struct node *last;
	
	for(i=1;i<=nodes;i++){
		printf("Enter the number of nodes connected to node A%d :",i);
		scanf("%d",&connections);
		for(j=1;j<=connections;j++){
			new_node=(struct node *)malloc(sizeof(struct node));			
			printf("Enter the neighbour %dst of A%d :",j,i);
			scanf("%d",&new_node->vertex);
			new_node->next=NULL;


	struct node * ptr=array_LinkedList[i] ;
	if(array_LinkedList[i]==NULL){
		array_LinkedList[i]=new_node;
		}
	else{
		while(ptr->next!=NULL){
			ptr=ptr->next;
			}
		ptr->next=new_node;
			
			}
					
		}	
	}	
}

void print_graph(struct node* array_LinkedList[],int nodes){
	struct node *ptr;
	int i;
	for(i=1;i<=nodes;i++){
		ptr=array_LinkedList[i];
		printf("\nNodes connected to node A%d are : \n",i);
		while(array_LinkedList[i]!=NULL){
			printf("\t%d",array_LinkedList[i]->vertex);
			array_LinkedList[i]=array_LinkedList[i]->next;	
	printf("\n");

		}
	}
}




