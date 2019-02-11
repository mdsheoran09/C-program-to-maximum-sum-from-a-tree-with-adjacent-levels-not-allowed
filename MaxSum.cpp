//C++ program to maximum sum from a tree with adjacent levels not allowed
#include <bits/stdc++.h>
using namespace std;

// tree node
struct Node
{
	int data;
	Node *left, *right;
};

// returns a new tree Node
Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}


int getSum(Node* root)
{
	if (!root)
		return 0;

	// create a queue for level order traversal
	queue<Node*> q;
	q.push(root);

	int level = 0;
	int evenSum = 0, oddSum = 0;

	// traverse until the queue is empty
	while (!q.empty())
	{
		int size = q.size();
		level += 1;

		// traverse for complete level
		while(size > 0)
		{
			Node* temp = q.front();
			q.pop();

			// check if level no. is even or odd and accordingly update the evenSum or oddSum
			if(level % 2 == 0)
				evenSum += temp->data;
			else
				oddSum += temp->data;

			// check for left child
			if (temp->left)
			{
				q.push(temp->left);
			}

			// check for right child
			if (temp->right)
			{
				q.push(temp->right);
			}
			size -= 1;
		}
	}
    if(oddSum<evenSum)
       return (evenSum);
    else
       return (oddSum);
}

// driver program
int main()
{
	// construct a tree
	Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->left->left = newNode(4);
    root->left->left->left = newNode(7);
    root->left->left->right = newNode(8);
    root->right->left->left = newNode(9);
    root->right->right->left = newNode(10);
    root->left->left->left->left = newNode(11);
    root->left->left->right->left = newNode(12);
    root->left->left->right->right = newNode(13);

	int result = getSum(root);
	cout << "Sum is :: ";
	cout << result << endl;
	return 0;
}

