#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root = NULL, *temp = NULL, *t2, *t1; 
struct node* newNode(int data)
{
	struct node* t = (struct node*)malloc(sizeof(struct node));
	t->data = data;
	t->left = NULL;
	t->right = NULL;
	return(t);
}
void postOrder(struct node* node)
{
	if(node==NULL)
		return;
	postOrder(node->left);
	postOrder(node->right);
	printf("%d",node->data);
}
void inOrder(struct node* node)
{
	if(node==NULL)
		return;
	inOrder(node->left);
	printf("%d",node->data);
	inOrder(node->right);
}
void preOrder(struct node* node)
{
	if(node==NULL)
		return;
	printf("%d",node->data);
	preOrder(node->left);
	preOrder(node->right);
}
int main()
{
struct node* root = newNode(1);
int data;

root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
printf("\nPre order traversal of tree \n");
preOrder(root);
printf("\npost order traversal of tree \n" );
postOrder(root);
printf("\nin order traversal od tree \n");
inOrder(root);
}