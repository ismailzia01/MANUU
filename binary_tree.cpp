#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    return 0;

}