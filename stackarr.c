#include <stdio.h>
#define n 5  
int stack[n] , top = -1, i  ; 

void push(int element) ; 
int pop() ; 
int peep() ; 
void display() ; 



void push(int element){
	if(top == (n-1)) 
	printf("Stack overflow\n") ; 
	else{
		top = top + 1 ; 
		stack[top] = element; 
		printf("Element is inserted \n") ; 
	}
} 


int pop(){
	int x ; 
	if(top == -1) {
		printf("Underflow \n") ; 
	}else{
x = stack[top] ; 
		top-- ; 
		return x ; 
		
	}
}

int peep(){
	if(top == -1) {
		printf("Underflow \n") ;
	}
		 	
	else{
		return stack[top] ; 
	}
		
}


void display(){
		if(top == -1) {
		printf("Underflow \n") ;
	}
		else{
			for(i=top; i>=0;i--)
				printf("Element: %d\n", stack[i]) ; 
		}
}


int main() {
	
	int choice , i ; 
	do{	printf("Enter your choice 1.push 2.pop 3.display 4.Peep\n") ; 
		scanf("%d",&choice) ; 
		switch(choice){
			case 1: 
					if(top == (n-1)) printf("Cant insert\n") ; 
					else{
					printf("Enter the element\n") ; 
					scanf("%d",&i) ; 
					push(i) ; }
					break ; 
			case 2: printf("Popped element = %d\n", pop()) ; break ; 
			case 3: display() ; break;  
			case 4: printf("Top most element = %d\n", peep()); break; 
		}
	}while(choice!=5) ; 
	
	
	return 0 ; 
}
