#include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node *left;
	node* right;
	node* parent;
};

struct node_avl
{
	int key;
	int balance;
	node_avl *left;
	node_avl *right;
	node_avl *parent;
};

node * insert_tree(node *n,int a)
{
	if(n==NULL)
	{
		node *temp;
		temp = new node;
		temp->key = a;
		temp->left = NULL;
		temp->right = NULL;
		temp->parent = NULL;
		return temp;
	}
	else if(a < n->key)
		n->left = insert_tree(n->left,a);
	else
		n->right = insert_tree(n->right,a);
	
	return n;
}

node * delete_tree(node *root,int a)
{
	if(root->key < a)
	{
		root->right = delete_tree(root->right,a);
	}
	else if(root->key > a)
	{
		root->left = delete_tree(root->left,a);
	}
	else
	{
		if(root->left == NULL)
		{
			node *temp;
			temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL)
		{
			node *temp;
			temp = root->left;
			free(root);
			return temp;
		}
		else
		{
			node *temp;
			temp = root;
			temp = temp->right;

			while(temp->left!=NULL)
			{
				temp = temp->left;
			}

			root->key = temp->key;

			root->right = delete_tree(root->right,temp->key);
		}
	}

	return root;
}

node_avl *insert_avl(node *root,int a)
{
	if(root==NULL)
	{
		node_avl *temp;
		temp = new node_avl;
		temp->key = a;
		temp->balance = 0;
		temp->right = NULL;
		temp->left = NULL;
		temp->parent = root;
		return temp;
	}
	if(a < root->key)
	{
		if(root->left == NULL)
		{
			node_avl *temp;
			temp = new node_avl;
			temp->key = a;
			temp->balance = 0;
			temp->right = NULL;
			temp->left = NULL;
			temp->parent = root;

			while(temp1!=NULL)
			{
				if(a < temp1->key)
				{
					if(temp1->balance == 1)
					{
						temp1->balance = 0;
						break;
					}
					else if(temp1->balance == 0)
					{
						temp1->balance = -1;
					}
					else
					{
						// rotate right
					}
				}
				else
				{
					if(temp1->balance == -1)
					{
						temp1->balance = 0;
						break;
					}
					else if(temp1->balance == 0)
					{
						temp1->balance = 1;
					}
					else
					{
						// rotate left
					}
				}
			
		}
		else
		{
			root->left = insert_avl(root->left,a);
		}
	}
	else
	{
		if(root->right == NULL)
		{
			node_avl *temp;
			temp = new node_avl;
			temp->key = a;
			temp->balance = 0;
			temp->right = NULL;
			temp->left = NULL;
			temp->parent = root;
		}
		else
		{
			root->right - insert_avl(root->right,a);
		}
	}
}

void inorder(node *root)
{
	if(root == NULL)
		return;

	inorder(root->left);
	cout<<root->key<<endl;
	inorder(root->right);
}

int main()
{
	int n;
	cout<<"No. of nodes : ";
	cin>>n;

	cout<<"enter key values "<<endl;

	node *root;
	root = NULL;

	for(int i=0;i<n;i++)
	{
		int new_node;
		cin>>new_node;

		root = insert_tree(root,new_node);
	}	

	inorder(root);

	root = delete_tree(root,2);

	inorder(root);

}