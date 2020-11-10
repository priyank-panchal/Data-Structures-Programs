
//hello
#include <iostream>
#include<queue>	
using namespace std;
class Node
{
public:
	int data;
	Node * left;
	Node * right;
};
class RootNode
{
public:
	Node *newNode(int data)
	{
		Node *NewNode=new Node();
		NewNode->data=data;
		NewNode->left=NULL;
		NewNode->right=NULL;
		return NewNode;		
	}
	void insert(Node *root,int data)
	{
		queue<Node *> Que;
		Que.push(root);
		while(!Que.empty())
		{
			Node *temp=Que.front();
			Que.pop();
			if(temp->left==NULL)	
			{
				temp->left=newNode(data);
				break;
			}
			else 
				Que.push(root->left);
			if(temp->right==NULL)
			{
				temp->right=newNode(data);
				break;
			}
			else 
				Que.push(root->right);
		}

	}
	void traversal(Node *root) {
    if(root == NULL)
        return;
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}

};
int main()
{
 	RootNode R;
	Node *root=R.newNode(10);
	R.insert(root,20);
	R.insert(root,30);
	R.insert(root,40);
	R.insert(root,50);
	R.traversal(root);
}
