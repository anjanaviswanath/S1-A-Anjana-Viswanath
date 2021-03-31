/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct tree {
    int info;
    struct tree *left;
    struct tree *right;
};
struct tree *insert(struct tree *,int);
void inorder(struct tree *);
void postorder(struct tree *);
void preorder(struct tree *);
struct tree *delet(struct tree *,int);
struct tree *search(struct tree *);
int main(void){
    struct tree *root;
    int choice,item_no;
    root=NULL;
    do{
        do{
            printf("\n\t 1.Insert in Binary Tree");
            printf("\n\t 2.Delete from Binary Tree");
            printf("\n\t 3.Inorder traversal of Binary Tree");
            printf("\n\t 4.Search");
            printf("\n\t 5.exit");
            printf("\n\t Enter your choice:");
            scanf("%d",&choice);
            if(choice<1 || choice>7)
                printf("\n Invalid choice-try again");
        }
        while(choice<1 || choice>7);
        switch(choice){
            case 1 : printf("\n enter new element:");
                     scanf("%d",&item_no);
                     root=insert(root,item_no);
                     printf("\n root is %d",root->info);
                     printf("\n\t inorder traversal of binary tree is:");
                     inorder(root);
                     break;
            case 2 : printf("\n\t element to be deleted:");
                     scanf("%d",&item_no);
                     root=delet(root,item_no);
                     inorder(root);
                     break;
            case 3 : printf("\n\t inorder traversal of binarytree is:");
                     inorder(root);
                     break;
            case 4 : printf("\nSearch operation in binarytree");
                     root=search(root);
                     break;
            default: printf("\n end of program");
        }
    }
    while(choice!=5);
    return(0);
}
struct tree *insert(struct tree *root,int x) {
    if(!root) {
        root=(struct tree*)malloc(sizeof(struct tree));
        root->info=x;
        root->left=NULL;
        root->right=NULL;
        return(root);
    }
    if(root->info > x)
       root->left=insert(root->left,x);else {
           if(root->info <x)
           root->right=insert(root->right,x);
       }
       return(root);
}
void inorder(struct tree *root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("%d",root->info);
        inorder(root->right);
    }
    return;
}
struct tree *delet(struct tree *ptr,int x) {
    struct tree *p1,*p2;
    if(!ptr) {
        printf("\n node not found");
        return(ptr);
    } else {
        if(ptr->info < x) {
            ptr->right = delet(ptr->right,x);
        } else if (ptr->info > x) {
            ptr->left=delet(ptr->left,x);
            return ptr;
        } else
        {
            if(ptr->info == x)
            {
                if(ptr->left == ptr->right)
                {
                    free(ptr);
                    return(NULL);
                }else if(ptr->left==NULL)
                {
                    p1=ptr->right;
                    free(ptr);
                    return p1;
                }else if(ptr->right==NULL)
                {
                    p1=ptr->left;
                    free(ptr);
                    return p1;
                }else {
                    p1=ptr->right;
                    p2=ptr->right;
                    while(p1->left != NULL)
                    p1=p1->left;
                    p1->left=ptr->left;
                    free(ptr);
                    return p2;
                }
            }
        }
        }
        return(ptr);
    }
    struct tree *search(struct tree *root) {
        int i,no;
        struct tree *ptr;
        ptr=root;
        printf("\n enter the element to be searched:");
        scanf("%d", &no);
        fflush(stdin);
        while(ptr) {
            if(no > ptr-> info)
              ptr=ptr->right;
              else if(no < ptr-> info)
              ptr=ptr->left;else
              break;
        }
        if(ptr) {
            printf("\n element %d which was searched is found and is=%d",no,ptr->info);
        }else
        printf("\n element %d does not exit in the binarytree",no);
        return(root);
    }
    
