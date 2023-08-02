// INORDER TRAVERSE OF TREE
#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node* root){
    if (root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct node* root){
    struct node* prev = NULL;
    if (root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if (prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}



int main(){
    struct node* p = createNode(10);
    struct node* p1 = createNode(5);
    struct node* p2 = createNode(15);
    struct node* p3 = createNode(2);
    struct node* p4 = createNode(6);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;


    printf("Inorder traverse\n");
    inOrder(p);
    printf("\n");
    printf("%d", isBST(p));

    return 0;
}


