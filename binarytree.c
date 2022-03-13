#include <stdio.h>
#include<stdlib.h>

// Node definition
struct Node{
    int data ;
    struct Node *left ; 
    struct Node *right; /
};

struct Node* makeTree(){
    int inputData ;
    struct Node *p ;
    printf("Enter the data or -1 to terminate\n") ;
    scanf("%d", &inputData) ;
    if(inputData == -1)
        return NULL;
    p = (struct Node*) malloc(sizeof(struct Node)) ;
    p->data = inputData ; 
    printf("Enter the left child of %d or -1 if no left child\n",inputData) ;
    p->left = makeTree(); 
    printf("Enter the right child of %d or -1 if no left child\n",inputData) ;
    p->right = makeTree();
    return p ;
}
void mpreorder(struct Node *t){
    if(t!=NULL){
        printf("%d->", t->data) ; // R, L, R
        mpreorder(t->left) ;
        mpreorder(t->right) ;
    }
}

void mpostorder(struct Node *t){
    if(t!=NULL){
        mpostorder(t->left) ;
        mpostorder(t->right) ;
        printf("%d->", t->data) ;
    }
}

void inorder(struct Node *t){
    if(t!=NULL) {
        inorder(t->left);
        printf("%d->", t->data);
        inorder(t->right);
    }
}
int main() {
    struct Node *root;
    root = makeTree();
    printf("Preorder Traversal \n");
    mpreorder(root);
    printf("\n");
    printf("Postorder Traversal \n");
    mpostorder(root);
    printf("\n");
    printf("Inorder Traversal \n");
    inorder(root);
    return 0;
}
