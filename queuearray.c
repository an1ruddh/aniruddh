#include <stdio.h>
#define qs 5

int myQueue[qs] ;
int f = -1 , r = -1;

void enqueue(int element){
   
    if(f == -1 && r == -1) {
        f=0 ; r=0 ;
        myQueue[r] = element;
        printf("Inserted\n") ;
    }
    else if(r==qs-1){
        printf("Not possible : Enqueue\n") ;
    }else{
        r = r + 1 ;
        myQueue[r] = element;
        printf("Inserted\n") ;
    }
}

int dequeue() {
   
    int elementDeleted ;
    if(f==-1 && r ==-1 ){
        printf("Deletion not possible\n") ;
    }else if(f==r) {
        elementDeleted = myQueue[r] ;
        r = -1 ; f=-1 ;
    }else{
        elementDeleted = myQueue[f] ;
        f = f+1 ;
    }
    printf("Deleted element = %d\n", elementDeleted) ;
    return elementDeleted;
}

void display() {
    int i ;
    if(f==-1 && r ==-1 ){
        printf("Underflow\n") ;
    }else{
        for(i=f; i<r+1; i++ )
            printf("Element: %d\n", myQueue[i]);
    }
}

int peek(){
    if(f==-1 && r ==-1 ){
        printf("Underflow\n") ;
        return -1 ;
    }else{
        return myQueue[f] ;
    }
}

int main() {
   
    enqueue(1) ;
    enqueue(2) ;
    enqueue(3) ;
    enqueue(4) ;
    enqueue(5) ;
    enqueue(6) ; 
    display() ;
    int x = peek() ;
    printf("%d\n", x) ;
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
