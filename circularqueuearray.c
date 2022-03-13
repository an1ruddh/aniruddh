#include<stdio.h>
#define qs 5 
int myQueue[qs] ; 
int i ; 
int f =-1, r = -1 ; 
void enqueue(int e){
	if(f==-1 && r==-1) {
		f=0 ; r=0 ; 
		myQueue[r] = e ; 
		printf("Element inserted\n") ; 
	}else if((r+1)%qs==f){
		printf("Queue is FULL\n") ; 
	}else{
		r = (r+1)%qs ; 
		myQueue[r] = e ; 
		printf("Element inserted\n") ; 
	}
}

void dequeue(){
	if(f==-1 && r==-1) {
		printf("underflow\n") ; 
	}else if(f==r){
		printf("Only one element: %d\n", myQueue[f]) ; 
		f=r=-1 ; 
	}else{
		printf("Element Deleted: %d\n", myQueue[f]) ;
		f = (f+1)%qs ;  
	}
}
int peek(){
	if(f==-1 && r==-1) {
		printf("underflow\n") ;
		 return -1 ;  
	}else{
		return myQueue[f] ; 
	}
}

void display(){
	if(f==-1 && r==-1){
		printf("Not Possible\n") ; 
	}else{
		for(i=f; i!=r; i=(i+1)%qs)
			printf("myQueue[i]= %d\n",myQueue[i]) ; 
	}
}
int main(){
	enqueue(1) ;
    enqueue(2) ;
    enqueue(3) ;
    enqueue(4) ;
    enqueue(5) ;
    enqueue(6) ; // Not possible
    display() ;
    int x = peek() ;
    printf("%d\n", x) ;
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
	return 0 ; 
}
