#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


struct node{
	int info ; 
	struct node *next ; 
};

struct node *head ; 



bool isEmpty(){
	if(head==NULL) return true ; 
	return false ; 
}
void push(int element){
	struct node *top = (struct node*) 
	malloc(sizeof(struct node)) ; 
	if(isEmpty()){ 
		printf("Insert Not possible\n") ; 
	}else if(head == NULL){ // first element case 2 
		printf("First element\n") ; 
		top->info = element ; 
		top->next = NULL ; 
		head = top ; 
	}else{ 
		top->info = element ; 
		top->next = head ; 
		head = top ; 
	}
}

int peek(){
		if(isEmpty()) return NULL ; 
		else return head->info; 
}

void display(){
	if(isEmpty()) printf("Stack is Empty\n") ;
	else{
		top = head ; 
		while(top!=NULL){
			printf("Element:%d\n", top->info ); 
			top = top->next; 
		}
	} 
}

void pop(){
	int valueDeleted ; 
	if(isEmpty()){
		printf("Stack is Empty\n") 
	}else{
		top = head ; 
		valueDeleted = head ->info ; 
		head = head->next; 
		free(top) ; 
	}
	
}

int peek(){
	
}

void display(){
	
}

int main(){
	return 0 ; 
}
