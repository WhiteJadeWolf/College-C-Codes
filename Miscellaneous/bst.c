/* Binary Search Tree operations : Insert, Delete, Traverse, Search.
Create BST in C for the followings :--
a. Insert 23, 14, 33, 7, 10, 56, 33, 80, 66, 70
b. Traverse using preorder, in Order, post Order.
c. Insert 20, 15, 50.
d. Delete 66, 10, 23
e. Traverse using preorder, inorder, postorder.
f. Search value 20. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *createnode(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *insert(struct node *root, int val)
{
    if (root == NULL)
    {
        return createnode(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    return root;
}

struct node *findmin(struct node *x)
{
    while (x && x->left)
    {
        x = x->left;
    }
    return x;
}

struct node *delete(struct node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = delete (root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delete (root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = findmin(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
}

struct node *search(struct node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root = NULL;
    int arr[] = {23, 14, 33, 7, 10, 56, 33, 80, 66, 70};
    int extra[] = {20, 15, 50};
    int del[] = {66, 10, 23};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        root = insert(root, arr[i]);
    }
    printf("Original Tree :--\n");
    printf("Inorder : ");
    inorder(root);
    printf("\n");
    printf("Preorder : ");
    preorder(root);
    printf("\n");
    printf("Postorder : ");
    postorder(root);
    printf("\n");
    for (int i = 0; i < sizeof(del) / sizeof(int); i++)
    {
        root = delete (root, del[i]);
    }
    for (int i = 0; i < sizeof(extra) / sizeof(int); i++)
    {
        root = insert(root, extra[i]);
    }
    printf("Updated Tree :--\n");
    printf("Inorder : ");
    inorder(root);
    printf("\n");
    printf("Preorder : ");
    preorder(root);
    printf("\n");
    printf("Postorder : ");
    postorder(root);
    printf("\n");
    search(root, 20) ? printf("FOUND\n") : printf("NOT FOUND\n");
}