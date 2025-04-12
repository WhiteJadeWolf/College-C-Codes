/* Given the inorder and preorder traversals of a binary tree, write a C/C++ program to construct the binary tree.
Inorder: 1, 8, 19, 13, 25, 9, 5, 10, 4, 3
Preorder: 25, 8, 1, 13, 19, 5, 9, 4, 10, 3 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int find(int *arr, int start, int end, int value)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

struct node *createnode(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *buildtree(int *preorder, int *inorder, int start, int end, int *index)
{
    if (start > end)
    {
        return NULL;
    }
    int current = preorder[*index];
    (*index)++;
    struct node *newnode = createnode(current);
    if (start == end)
    {
        return newnode;
    }
    int pos = find(inorder, start, end, current);
    newnode->left = buildtree(preorder, inorder, start, pos - 1, index);
    newnode->right = buildtree(preorder, inorder, pos + 1, end, index);
    return newnode;
}

void print_inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder(root->left);
    printf("%d ", root->data);
    print_inorder(root->right);
}

void print_preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_postorder(root->left);
    print_postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    int inorder[] = {1, 8, 19, 13, 25, 9, 5, 10, 4, 3};
    int preorder[] = {25, 8, 1, 13, 19, 5, 9, 4, 10, 3};
    int size = sizeof(inorder) / sizeof(inorder[0]);
    int index = 0;
    struct node *root = buildtree(preorder, inorder, 0, size - 1, &index);
    printf("Inorder traversal : ");
    print_inorder(root);
    printf("\n");
    printf("Preorder traversal : ");
    print_preorder(root);
    printf("\n");
    printf("Postorder traversal : ");
    print_postorder(root);
    printf("\n");
    return 0;
}
