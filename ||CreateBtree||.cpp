//Several implementations are there
struct Node 
{ 
    int data; 
    struct Node *left, *right; 
}; 

Node* newNode(int data) 
{ 
    Node *temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
Node* root = newNode(10); 
root->left = newNode(2); 

//or
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct node *root = newNode(12); 
root->left = newNode(10);  
//or
struct Node* newNode(int key) 
{ 
    struct Node* node = new Node; 
    node->key = key; 
    node->left = node->right = NULL; 
    return node; 
} 
Node *root = newNode(1); 
root->left = newNode(2); 
